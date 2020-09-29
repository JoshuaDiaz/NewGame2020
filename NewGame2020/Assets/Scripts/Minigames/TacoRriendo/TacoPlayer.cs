using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TacoPlayer : MonoBehaviour
{
    // References to physics objects
    [SerializeField] private Rigidbody2D playerBody;
    [SerializeField] private BoxCollider2D playerCollider;
    [SerializeField] private LayerMask platformLayerMask;

    // Internal data
    private bool playing; // whether the game has begun
    private float posX; // player's x position shall never change
    private bool grounded;

    void Awake()
    {
        posX = transform.localPosition.x;
    }


    // called by game manager once game actually starts
    public void Init()
    {
        playing = true;  
        // transform.localPosition = new Vector3(-320f, -190f, 0);  
    }


    // Update is called once per frame
    void Update()
    {
        // always snap player to the proper x position
        if(!Mathf.Approximately(transform.localPosition.x, posX)) {
            Vector3 p = transform.localPosition;
            p.x = posX;
            transform.localPosition = p;
        }

        if(playing) {
            // jump
            if(Input.GetMouseButtonDown(0)) {
                if(isGrounded()) {
                    playerBody.velocity = 13.25f * Vector2.up;
                }
            }
        }
    }

    /* Check for collisions with ingredients / obstacles*/
    private void OnTriggerEnter2D(Collider2D other) 
    {
        if(other.name == "Ingredient") {
            TacoRunnerGameManager.instance.UpdateScore(1);
            other.gameObject.SetActive(false);
        }
        else if(other.name == "KillPlayer") {
            TacoRunnerGameManager.instance.UpdateScore(-1);
            playerBody.velocity = 15f * Vector2.down;
        }
    }


    public float getX()
    {
        return posX;
    }


    /** Check if player is grounded by looking for platforms directly below player. **/
    private bool isGrounded()
    {
        // return grounded;
        return (null != Physics2D.BoxCast(playerCollider.bounds.center,
                                        playerCollider.bounds.size,
                                          0f,
                                          Vector2.down,
                                          0.1f,
                                          platformLayerMask).collider);
    }
}
