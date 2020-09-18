using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using Anonym.Isometric;
using UnityEngine.UI;

public enum FacingDirection {NONE = -1, NW = 0, NE = 1, SE = 2, SW = 3};


/**
 * Model / controller for the alpaca. Handles animation, falling,
 * picking & dropping blocks, and handling death.
 */
public class Alpaca : MonoBehaviour {

	float dest_y = -100; // destined height (y coord), -100 if not falling
	bool squash = false; // will squash when reach destination
	bool dead = false; // whether alpaca be dead
	bool lastBlock; // true iff alpaca is holding a block
	private bool isMoving = false; 
	private bool isFalling = false;
	private Vector3 movingDest; // where alpaca is being sent if it's moving
	private float moveSpeed = 5; // how fast alpaca moves
	const float OFFSET = 0.23f; // sketchy offset that you shift alpaca down for
	public AudioSource landSound;
	public AudioSource popSound;

	// Use this for initialization
	void Start () {
        if(GameObject.FindGameObjectsWithTag("WORLD").Length > 0) {
            WorldScript world = GameObject.FindGameObjectsWithTag("WORLD")[0].GetComponent<WorldScript>();
            world.AddAlpaca(this);
        }

        if(GameObject.Find("MusicTime") != null)
        	music = GameObject.Find("MusicTime").GetComponent<AudioSource>();

    	if (music != null) 
			music.volume = 0.3f;

		dest_y = -100;

		Vector3 tmp = GetCurrAlpacaLocation();
		tmp.y -= OFFSET;
		gameObject.transform.position = tmp;
	}
	

	// Update is called once per frame
	void Update () {
		// fall if not at destinated height yet
		if(dest_y != -100 && GetY() > dest_y) {
			Vector3 coords = gameObject.transform.position;
			coords.y -= Time.deltaTime * 15; // Fall at speed 15

			if(coords.y <= dest_y) { // landed at destination y
				coords.y = dest_y;
				dest_y = -100;
				SetFalling(false);
				landSound.Play();
				isFalling = false;
			} else {
				SetFalling(true);
				isFalling = true;
			}

			gameObject.transform.position = coords;
		} 
	
		// Smooth Movement
		if(isMoving){
			transform.position = Vector3.MoveTowards(transform.position, movingDest, moveSpeed * Time.deltaTime);
			if(Vector3.Distance(transform.position, movingDest) <= 0.005){
				transform.position = movingDest;
				isMoving = false;
			}
		}
	}


/*=======================================================================================*/
#region State
	

	/* Get current alpaca position */
	public Vector3 GetCurrAlpacaLocation()
    {
    	Vector3 coords = gameObject.transform.position;
		if(isMoving) {
			coords.x = movingDest.x;
			coords.y = movingDest.y;
			coords.z = movingDest.z;	
		} else {
			coords.x = (float)Mathf.Round(coords.x);
			coords.y = (float)Mathf.Round(coords.y);
			coords.z = (float)Mathf.Round(coords.z);
		}
    	return coords;
    }


	/* Set a position and direction for alpaca */
	public void SetAlpacaSpawn(Vector3 pos, FacingDirection dir)
    {
		pos.y -= OFFSET;
    	gameObject.transform.position = pos;
		SetFacingDirection(dir);
		UpdateWalk();
    }


	/* Return the block vecotr in front of the alpaca (in direction its facing)
	 * @param clickedWhere : direction the alpaca is facing
	 */
	public Vector3 GetCurrAlpacaDest(FacingDirection clickedWhere) 
	{
		Vector3 dest = GetCurrAlpacaLocation();
    	switch(clickedWhere) {
    		case FacingDirection.NW:
    			dest.x--;
    			break;
    		case FacingDirection.NE:
    			dest.z++;
    			break;
    		case FacingDirection.SE:
    			dest.x++;
    			break;
    		case FacingDirection.SW:
    			dest.z--;
    			break;
    		default:
    			//Debug.Log("incorrect clickedWhere in curralpacadest call");
    			return dest;
    	}
    	return dest;
	}


    private float GetY() {
    	return gameObject.transform.position.y + 0.3f;
    }


    /**
     * Move alpaca to this block
     *
     * @ param {direction} coordinate of where alpaca goes
     */
    public void Move(Vector3 dir)
    {
    	Vector3 coords = GetCurrAlpacaLocation();
    	if(dir.y < coords.y) {
			gameObject.transform.position =  new Vector3(dir.x, coords.y, dir.z);
			dest_y = dir.y - OFFSET;
		} 
		else {
			UpdateWalk();
			isMoving = true;
			dir.y -= OFFSET;
			movingDest = dir;
		}
    }


    /**
     * Returns whether alpaca is dead :(
     */
    public bool IsDead() {
    	return dead;
    }
    

    public void SetBlock(bool has) {
    	popSound.Play();
    	animator.SetBool("poof", has);
		animator.SetBool("is_blockpaca", has);
		//animator.SetBool("drop_block", !has); //does not exist
		lastBlock = has;
    }


    public bool HasBlock() {
    	return lastBlock;
    }


#endregion
/*==============================================================================================*/
#region Animation    

    public Animator animator; // alpaca animator
    private AudioSource music; // background music (reference to change volume if dead)
    public Image deathImage; // death banner image
    public AudioSource deathSong; // death audio
    public FacingDirection dir = FacingDirection.SE; // direction alpaca is facing, set SetFacingDirection for more
    												 // also used for block tutorial


    /**
     * View stuff for death (draw death banner & play death music & soften bg music)
     */
    private void Died() {
    	dead = true;
		deathImage.enabled = true;
		if (!deathSong.isPlaying)
		{
			if (music != null) 
				music.volume = 0.005f;
			deathSong.Play();
		}
    }


	/**
	 * Return whether or not the alpaca is in motion
	 */
	public bool isAlpacaMoving(){
		return isMoving || isFalling;
	}

    /**
     * View stuff for when alpaca is squashed
     */
    // public void SetSquashed() {
    // 	animator.SetBool("walkse", false);
	// 	animator.SetBool("walksw", false);
	// 	animator.SetBool("walknw", false);
	// 	animator.SetBool("walkne", false);
	// 	animator.SetBool("death_by_fire", false);
	// 	animator.SetBool("death_by_splat", true);
	// 	animator.SetBool("dead", true);

	// 	Died();
    // }

    public void SetFlamed() {
    	//Debug.Log("death by fire");
    	animator.SetBool("walkse", false);
		animator.SetBool("walksw", false);
		animator.SetBool("walknw", false);
		animator.SetBool("walkne", false);
		animator.SetBool("death_by_splat", false);
		animator.SetBool("death_by_fire", true);
		animator.SetBool("dead", true);

    	Died();
    }


    public void SetFacingDirection(FacingDirection dir) {
    	if(dir == FacingDirection.NONE) return;
		this.dir = dir;
    }


    public void StopWalk() {
    	animator.SetBool("poof", false);
		animator.SetBool("walkse", false);
		animator.SetBool("walksw", false);
		animator.SetBool("walknw", false);
		animator.SetBool("walkne", false);
    }


    public void UpdateWalk() {
		if (dir == FacingDirection.NE && !animator.GetBool("walkne"))
		{
			animator.SetBool("walkse", false);
			animator.SetBool("walksw", false);
			animator.SetBool("walknw", false);
			animator.SetBool("walkne", true);
		}

		//SW
		if (dir == FacingDirection.SW && !animator.GetBool("walksw"))
		{
			animator.SetBool("walkse", false);
			animator.SetBool("walksw", true);
			animator.SetBool("walknw", false);
			animator.SetBool("walkne", false);
		}

		//NW
		if (dir == FacingDirection.NW && !animator.GetBool("walknw"))
		{
			animator.SetBool("walkse", false);
			animator.SetBool("walksw", false);
			animator.SetBool("walknw", true);
			animator.SetBool("walkne", false);
		}

		//SE
		if (dir == FacingDirection.SE && !animator.GetBool("walkse"))
		{
			animator.SetBool("walkse", true);
			animator.SetBool("walksw", false);
			animator.SetBool("walknw", false);
			animator.SetBool("walkne", false);
		}
    }


    public void SetFalling(bool set) {
		animator.SetBool("walkse", false);
		animator.SetBool("walksw", false);
		animator.SetBool("walknw", false);
		animator.SetBool("walkne", false);
		animator.SetBool("is_falling", set);
    }

#endregion
/*==============================================================================================*/
}

