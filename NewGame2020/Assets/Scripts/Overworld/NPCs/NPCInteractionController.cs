using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPCInteractionController : MonoBehaviour
{
    public bool inNeed;
    public string minigameSceneName;
    public ComicCollection comic; // Set in the editorto this NPC's comic collection component
    [SerializeField] private Collider boxCollider; // ref to the boxCollider in the NPC gameObjects's child gameObject

    private bool clickable;
    private bool clicked;


    // Start is called before the first frame update
    void Start()
    {
        clickable = false;
        clicked = false;
        if(boxCollider == null) { // should be set in editor, but just in case
            boxCollider = gameObject.GetComponentInChildren<Collider>();
        }
    }


    /* If clickable, poll for  */
    void Update()
    {
        if(clickable) {
            if(Input.GetMouseButtonDown(0)) {
                RaycastHit hit;
                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                if(Physics.Raycast(ray, out hit)) { 
                    if(hit.collider == boxCollider) {
                        clicked = true;
                    }
                }
             }
        }
    }


    /** Sets whether this NPC is clickable and clears the "clicked" flag
        This should be set when the player is adjacent to this NPC, and unset
        whenever the player leaves */
    public void SetClickable(bool set)
    {
        clickable = set;
        clicked = false;
    }


    public bool isClicked()
    {
        return clicked;
    }


}
