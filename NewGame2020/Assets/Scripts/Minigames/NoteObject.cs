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
    }


    public void Init(float x, float y, float noteSpeed, int lane)
    {
        rectTransform.anchoredPosition = new Vector3(x, y, 0);
        rectTransform.localScale = new Vector3(1f, 1f, 1f);
        this.noteSpeed = noteSpeed;
        this.lane = lane;
        fall = true;
    }

    
    void Update() {
        if(fall) {
            rectTransform.anchoredPosition -= new Vector2(0, noteSpeed*Time.deltaTime);  
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
            if(recyclable) {
                RecycleGameManager.instance.UntrackNote(this);
            }
        }
    }


    public int GetLane()
    {
        return lane;
    }

    
    public float GetY()
    {
        return rectTransform.anchoredPosition.y;
    }
}
