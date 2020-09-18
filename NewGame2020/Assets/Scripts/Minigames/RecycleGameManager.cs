using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RecycleGameManager : GeneralMinigameController
{
    /* Singleton instance */
    public static RecycleGameManager instance;

    /* Constants */
    [SerializeField] private float dropY; // y coordinate of an instantiated note

    /* References */
    [SerializeField] private RectTransform[] buttTransforms; // Reference to button transforms
    [SerializeField] private GameObject[] nonRecyclableNotesPrefabs; // Reference to all the "Recyclable" prefabs
    [SerializeField] private GameObject[] recyclableNotesPrefabs; // Reference to all the "Non-Recyclable" prefabs
    [SerializeField] private GameObject[] hitEffects;

    /** Game Settings **/
    public float bpm; // BPM of background song
    public int measure; // Measure of background song
    [SerializeField] private float beatsBeforeStart;
    private float travelDistance;
    private float spb; // seconds-per beat
    [SerializeField] private int maxRecycledItems;

    /** Internal Game Data **/
    private int numLanes; // Number of lanes in the game
    private NoteObject[] clickableNotes; // notes that are currently on the buttons. Index corresponds to the lane this note is on. array size = numLanes.
    private bool waiting; // whether we are waiting to spawn the next beat


    // Start is called before the first frame update
    void Start()
    {
        base.Start();
        numLanes = buttTransforms.Length;
        clickableNotes = new NoteObject[numLanes];
        instance = this;
        spb = 60.0f/bpm;
        travelDistance = dropY - buttTransforms[0].anchoredPosition.y;
        waiting = false;
    }


    // Update is called once per frame
    void Update()
    {
        base.Update();
        if(playing) {
            if(!waiting) { // TEST
                StartCoroutine(GenerateAndWait(spb));
            }
        }
    }


    /* Track the note by adding it to the clickable notes array 
     * Currently, only one note will be tracked per lane at any time.
       This will be the last note to enter the button's collider*/
    public void TrackNote(NoteObject n)
    {
        clickableNotes[n.GetLane()] = n;
    }


    /* Stop tracking the argument note if it is being tracked */
    public void UntrackNote(NoteObject n)
    {
        if(clickableNotes[n.GetLane()] == n) {
            clickableNotes[n.GetLane()] = null;
        }
    }


    int hitcount = 0;
    /** Called when any of the on-screen buttons are clicked. 
      * buttIndex is unique to each button and corresponds to that button's lane.
      * Checks if any note is in the clickableNotes array for this button's lane. If 
      * so, disable it and check how lined up to the button the note was for scoring. 
      */
    public void ClickedButt(int buttIndex) 
    {
        if(instance.clickableNotes != null && instance.clickableNotes[buttIndex] != null)
        {
            NoteObject n = instance.clickableNotes[buttIndex];
            n.gameObject.SetActive(false);
            float dist = Mathf.Abs(n.transform.position.y - instance.buttTransforms[0].position.y);
            hitcount++;
            if(dist <= 30) {
                Debug.Log("PERFECT! " + hitcount);
                GameObject g = Instantiate(hitEffects[3], Vector3.zero, Quaternion.identity);
                g.transform.SetParent(canvasTransform);
                g.GetComponent<RectTransform>().position = buttTransforms[buttIndex].position;
            }
            else if(dist <= 60) {
                Debug.Log("Good! " + hitcount);
                GameObject g = Instantiate(hitEffects[2], Vector3.zero, Quaternion.identity);
                g.transform.SetParent(canvasTransform);
                g.GetComponent<RectTransform>().position = buttTransforms[buttIndex].position;
            }
            else {
                Debug.Log("Okay! " + hitcount);
                GameObject g = Instantiate(hitEffects[1], Vector3.zero, Quaternion.identity);
                g.transform.SetParent(canvasTransform);
                g.GetComponent<RectTransform>().position = buttTransforms[buttIndex].position;
            }
            instance.clickableNotes[buttIndex] = null;
        }
        else {
            Debug.Log("PENALTY");
            GameObject g = Instantiate(hitEffects[0], Vector3.zero, Quaternion.identity);
            g.transform.SetParent(canvasTransform);
            g.GetComponent<RectTransform>().position = buttTransforms[buttIndex].position;
        }
    }


    private IEnumerator GenerateAndWait(float s)
    {
        GenerateNoteRow();
        waiting = true;
        yield return new WaitForSeconds(s);
        waiting = false;
    }


    /** Generate an entire row of note objects and initialize them. The amount of
      * notes in a rowis determined by the number of lanes which is determined by
      * the amount of buttons. in the buttTransforms list.
      */
    private void GenerateNoteRow()
    {
        // numRecyclable <= numObjs <= numLanes
        int numObjs = Random.Range(1, numLanes+1); // number of falling objects in this row
        int numRecyclable = Random.Range(1, (numObjs < maxRecycledItems) ? numObjs+1 : maxRecycledItems+1); // number of the falling objects that are recyclable, max 2

        bool[] usedX = new bool[numLanes]; // Ensure each x-coordinate is used only once for the row
        GameObject[] objs = new GameObject [numObjs]; // List of Note Gameobjects being instantiated
        int[] lanes = new int[numObjs]; // Each note Gameobject's lane. Saved for use in Note's initialization.

        // Instantiate note objects
        for(int i = 0; i < numObjs; i++) {
            // Choose this note's lane randomly, reroll if the lane is already used.
            int lane = Random.Range(0, numLanes);
            while(usedX[lane]) {
                lane = Random.Range(0, numLanes);
            }
            usedX[lane] = true;
            lanes[i] = lane;

            // Instantiation. Create recyclable ones first, the rest are non-recyclable
            if(i < numRecyclable) {
                objs[i] = Instantiate(recyclableNotesPrefabs[Random.Range(0, recyclableNotesPrefabs.Length)],
                                                             Vector3.zero,
                                                             Quaternion.identity);
            }
            else {
                objs[i] = Instantiate(nonRecyclableNotesPrefabs[Random.Range(0, nonRecyclableNotesPrefabs.Length)],
                                                                Vector3.zero,
                                                                Quaternion.identity);
            }
            objs[i].transform.SetParent(canvasTransform); // Set the falling object's parent to be the "All" gameobject
            objs[i].GetComponent<RectTransform>().anchoredPosition = new Vector3(buttTransforms[lane].anchoredPosition.x, // Set falling object's recttransform position
                                                                                 dropY,
                                                                                 0); 
        }

        // Initialize the gameObjects (give them bpm, lane#, and start dropping them)
        for(int i = 0; i < numObjs; i++) {
            objs[i].GetComponent<NoteObject>().Init(travelDistance/(beatsBeforeStart*spb), lanes[i]);
        }
    }
}
