using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoteObject : MonoBehaviour
{
    private RectTransform rectTransform;

    [SerializeField] private bool recyclable;
    private float noteSpeed;
    private bool fall; // whether the note should start falling or not
    private int lane; // lane that this Note is falling in

    void Awake()
    {
        fall = false;
        rectTransform = gameObject.GetComponent<RectTransform>();
        counter = 0f;
    }

    float counter;
    void Update() {
        if(fall)
        {
            GetComponent<RectTransform>().anchoredPosition -= new Vector2(0, noteSpeed*Time.deltaTime);  
            counter += Time.deltaTime; 
        } 
    }


    private void OnTriggerEnter2D(Collider2D other) 
    {
        if(other.name.Contains("Butt")) {
            if(recyclable) {
                RecycleGameManager.instance.TrackNote(this);
            }
        }
        else if(other.name == ("NoteDestroyer")) {
            Destroy(gameObject);
        }
    }


    private void OnTriggerExit2D(Collider2D other) 
    {
        if(other.name.Contains("Butt")) {
            Debug.Log("BYE");
            if(recyclable) {
                RecycleGameManager.instance.UntrackNote(this);
            }
        }
    }


    public void Init(float noteSpeed, int lane)
    {
        this.noteSpeed = noteSpeed;
        this.lane = lane;
        fall = true;
    }


    public int GetLane()
    {
        return lane;
    }
}
