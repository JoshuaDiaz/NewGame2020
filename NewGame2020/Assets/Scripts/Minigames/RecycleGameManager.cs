using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RecycleGameManager : GeneralMinigameController
{
    /* Singleton instance */
    public static RecycleGameManager instance;

    /* Constants */
    [SerializeField] private float dropY; // y coordinate of an instantiated note

    /* References */
    [SerializeField] private RectTransform[] buttTransforms; // Reference to button transforms
    [SerializeField] private Text scoreText;

    /* Refs to prefabs to be instantiate */
    [SerializeField] private GameObject[] nonRecyclableNotesPrefabs; // Reference to all the "Recyclable" prefabs
    [SerializeField] private GameObject[] recyclableNotesPrefabs; // Reference to all the "Non-Recyclable" prefabs
    [SerializeField] private GameObject[] hitEffects;

    /** Game Settings **/
    [SerializeField] private float bpm; // BPM of background song
    [SerializeField] private float travelBeats; // amount of beats it takes note to get from top to bottom
    [SerializeField] private int maxRecycledItems;
    private float noteSpeed;
    private float spb; // seconds-per beat

    /** Internal Game Data **/
    private int numLanes; // Number of lanes in the game
    private NoteObject[] clickableNotes; // notes that are currently on the buttons. Index corresponds to the lane this note is on. array size = numLanes.
    private bool waiting; // whether we are waiting to spawn the next beat
    private int score;
    private int multiplier;


    private void Awake() {
        instance = this;
        spb = 60.0f/bpm;
        waiting = false;
        score = 0;
        multiplier = 1;
    }


    // Start is called before the first frame update
    void Start()
    {
        base.Start();
        numLanes = buttTransforms.Length;
        clickableNotes = new NoteObject[numLanes];
        noteSpeed = (dropY - buttTransforms[0].anchoredPosition.y)/(travelBeats*spb);
        AudioManager.PlaySound("Background");
    }


    // Update is called once per frame
    void Update()
    {
        base.Update();
        if(playing) {
            if(!waiting) { // TEST
                StartCoroutine(GenerateAndWait(spb));
            }
            if(score >= 100) {
                EndMinigame();
            }
        }
    }

// ============================================================================================ //
#region Scoring

    /* Track the note by adding it to the clickable notes array 
     * Only one note will be tracked per lane at any time.
       This will be the last note to enter the button's collider*/
    public void TrackNote(NoteObject n)
    {
        clickableNotes[n.GetLane()] = n;
    }


    /* Stop tracking the argument note because it was missed
     * Also generates the "miss" effect at the bottom of the screen and penalizes score.
    */
    public void UntrackNote(NoteObject n)
    {
        if(clickableNotes[n.GetLane()] == n) {
            clickableNotes[n.GetLane()] = null;
        }
        GenerateHitEffect(0, buttTransforms[n.GetLane()].position.x, 10); // miss effect from bottom of screen
        UpdateScore(-1);
    }


    /** Called when any of the on-screen buttons are clicked. 
      * buttIndex is unique to each button and corresponds to that button's lane.
      * Checks if any note is in the clickableNotes array for this button's lane. If 
      * so, disable it and check how lined up to the button the note was for scoring. 
      */
    public void ClickedButt(int buttIndex) 
    {
        // hitEffect gameObject that will be generated will appear at coordinates around the pressed button
        float effectX = buttTransforms[buttIndex].position.x + Random.Range(-0.5f * buttTransforms[0].sizeDelta.x, 0.5f * buttTransforms[0].sizeDelta.x);
        float effectY = buttTransforms[buttIndex].position.y + Random.Range(-0.5f * buttTransforms[0].sizeDelta.y, 0.5f * buttTransforms[0].sizeDelta.y);

        if(instance.clickableNotes != null && instance.clickableNotes[buttIndex] != null) // hit a note
        {
            NoteObject n = instance.clickableNotes[buttIndex]; // get the note we just clicked & deactivate it
            instance.clickableNotes[buttIndex] = null;         // stop note occupying this space
            float dist = Mathf.Abs(n.GetY() - instance.buttTransforms[0].anchoredPosition.y);
            DestroyImmediate(n.gameObject);

            // Resolve note
            if(dist <= 15) {
                Debug.Log("PERFECT!");
                GenerateHitEffect(3, effectX, effectY);
                UpdateScore(3);
            }
            else if(dist <= 30) {
                Debug.Log("Good!");
                GenerateHitEffect(2, effectX, effectY);
                UpdateScore(2);
            }
            else {
                Debug.Log("Okay!");
                GenerateHitEffect(1, effectX, effectY);
                UpdateScore(1);
            }
        }
        else { // hit nothing
            Debug.Log("PENALTY");
            GenerateHitEffect(0, effectX, effectY);   
            UpdateScore(-1);   
        }
    }


    void UpdateScore(int incr)
    {
        if(score + incr >= 0){
            score += multiplier * incr;
            scoreText.text = "Score: " + score;
        }
    }


    void GenerateHitEffect(int effect, float x, float y)
    {
        GameObject hitFXObj = Instantiate(hitEffects[effect], Vector3.zero, Quaternion.identity); 
        hitFXObj.transform.SetParent(canvasTransform);
        hitFXObj.GetComponent<HitEffect>().Init(x, y);
    }

#endregion
// ============================================================================================ //
#region NoteGeneration

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
        }

        // Initialize the gameObjects (give them pos, lane#, and start dropping them)
        for(int i = 0; i < numObjs; i++) {
            objs[i].GetComponent<NoteObject>().Init(buttTransforms[lanes[i]].anchoredPosition.x, dropY,
                                                    noteSpeed,
                                                    lanes[i]);
        }
    }

#endregion
// ============================================================================================ //
}
