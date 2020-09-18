using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using System;
using System.Text.RegularExpressions;
using Anonym.Isometric;

/**
 * The ~ all foreseeing ~ control script for every playable level.
 * Contains a model of the currentl level map, model of the alpaca,
 * and is in charge of processing user movements.
 */
public class WorldScript : MonoBehaviour {

	private const int numberOfLevels = 26;
	Map map;
	Alpaca alpaca;
	private int level;

	// Scoreboard keeps track of level time and numberOfMoves
	public ScoreboardController scoreboardController;


	// used to highlight four quadrants
	public GameObject quadrant_0, quadrant_1, quadrant_2, quadrant_3;
	private Image[] quadrants;

	// leve complete! screen
	public GameObject levelCompleteScreen;

	private BlockButt blockButt;

	public ComicController comicController;

	public SceneLoadController sceneLoadController;

	public enum GameMode {WALKING, COMIC, MINIGAME};
	private GameMode gameMode;


	void Awake() 
	{
		if(map == null) {
			map = new Map(100, 100);
		}
	}


	// Use this for initialization
	void Start () {
		// level = int.Parse(Regex.Match(SceneManager.GetActiveScene().name, @"\d+").Value);
      	// currentLevelName currentLevelScript = GameObject.Find("GameObject").GetComponent<currentLevelName>();
      	// currentLevelScript.currentLevelNameString = SceneManager.GetActiveScene().name;

		// PlayerPrefs.SetString ("lastLoadedScene", currentLevelScript.currentLevelNameString);

		// Scale quadrants to the screen width & height
		Vector2 quad_dim = new Vector2(Screen.width*0.5f, Screen.height*0.5f);
		quadrant_0.GetComponent<RectTransform>().sizeDelta = quad_dim;
		quadrant_1.GetComponent<RectTransform>().sizeDelta = quad_dim;
		quadrant_2.GetComponent<RectTransform>().sizeDelta = quad_dim;
		quadrant_3.GetComponent<RectTransform>().sizeDelta = quad_dim;

		quadrants = new Image[4]{quadrant_0.GetComponent<Image>(),
										quadrant_1.GetComponent<Image>(),
										quadrant_2.GetComponent<Image>(),
										quadrant_3.GetComponent<Image>()};
		quadrants[0].enabled = false;
		quadrants[1].enabled = false;
		quadrants[2].enabled = false;
		quadrants[3].enabled = false;

		// clickedWhere = lastClickedWhere = FacingDirection.SW;
		// pan_ctrlr = GameObject.Find("Pan Butt").GetComponent<PanButtonController>();
		// cam controller assign in editor
		// comic controller assign in editor
		gameMode = GameMode.WALKING;
	}


	void Update () {
		ProcessCurrBlock();
		ProcessInput();
	}


/*============================================================================*/
#region QuadrantHighlighting

	/**
	 * Remove all highlights from screen
	 */
	void ClearHighlights() {
		quadrants[0].enabled = false;
		quadrants[1].enabled = false;
		quadrants[2].enabled = false;
		quadrants[3].enabled = false;
    }

    /**
     * Makes the current click position highlighted
     */
    void HighlightQuadrant() {
    	ClearHighlights();
    	if(clickedWhere == FacingDirection.NONE) return;
    	quadrants[(int)clickedWhere].enabled = true;
    }

	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = MODEL DECLARATION
	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

	/**
	 * Adds a block to the map. Every block declares itself when its GridCoordinates
	 * object is initialized (Start() method).
	 *
	 * @param {name} Name of block
	 * @param {last} Previous coordinate of block, if existed
	 * @param {coords} Location of block
	 */
	public void AddBlock(string name, Vector3 last, Vector3 coords, GridCoordinates obj) {
		if(map == null) {
			map = new Map(100, 100);
		}
		map.AddBlock(name, last, coords, obj);
	}

	/**
	 * Adds the alpaca model to world. Alpaca object declares itself in its constructor.
	 *
	 * @param {a} Alpaca
	 */
	public void AddAlpaca(Alpaca a) {
		if(map == null) {
			map = new Map(100, 100);
		}
		alpaca = a;
	}


	public void AddBlockButt(BlockButt b) {
		if(map == null) {
			map = new Map(100, 100);
		}
		blockButt = b;
	}


#endregion
/*============================================================================*/
#region BlockProcessing

	/**
	 * Helper function for Block Tutorial
	 */
	public Block GetBlockAlpacaFacing() {
		return GetBlockAt(alpaca.GetCurrAlpacaDest(clickedWhere));
	}

	/**
	 * Get the block below the given location.
	 */
	Block GetBlockBelow(Vector3 loc) {
		if(loc == null || map == null) return null;
		loc.y--;
		loc.y = (float)Math.Ceiling(loc.y);
		return map.GetBlock(loc);
	}

	/**
	 * Get the block at the given location.
	 */
	Block GetBlockAt(Vector3 loc) {
		return map.GetBlock(loc);
	}


	/**
	 * Get the block above the given location.
	 */
	Block GetBlockAbove(Vector3 loc) {
		loc.y++;
		loc.y = (float)Math.Ceiling(loc.y);
		return map.GetBlock(loc);
	}


	/**
	 * Checks what block the alpaca is on currently and handles its logic.
	 * (Dies for lava and wins for win block.)
	 */
	float end_timer = 0; // used to delay level transition before win sound plays
	void ProcessCurrBlock() {
		Block currBlock = GetBlockBelow(alpaca.GetCurrAlpacaLocation());
		if(currBlock == null) {
			return;
		}
		switch(currBlock.b_type) {
			case Block.BlockType.GATE:
				end_timer += Time.deltaTime;
				if(end_timer >= 0.2f) {
					currBlock.b_type = Block.BlockType.NONE; // stop processing this block
					sceneLoadController.LoadScene(currBlock.getCoords()); // Load next scene
				}
				break;
				// if(end_timer == 0) {
				// 	winSound.Play();
				// }
				// end_timer += Time.deltaTime;
				// if(end_timer > 0.2f) {
				// 	// Update Farther Reached Level stat
				// 	if(PlayerPrefs.GetInt("LevelPassed") < level) {
				// 		PlayerPrefs.SetInt("LevelPassed", level);
				// 	}
				// 	// Wait for just a sec, then load next level
				// 	if(end_timer < 100f) {
				// 		end_timer = 999f;
				// 		if(level != numberOfLevels){
				// 			scoreboardController.processFinalScore(level);
				// 			Debug.Log("T: " + PlayerPrefs.GetFloat("Level" + level+ "BestTime"));
				// 			Debug.Log("N: " + PlayerPrefs.GetInt("Level" + level + "BestNumMovesMade"));
				// 			Debug.Log("S: " + PlayerPrefs.GetFloat("Level" + level + "BestScore"));
				// 			SceneManager.LoadSceneAsync("B" + (level+1), LoadSceneMode.Single);
				// 		}
				// 	}
				// 	// While waiting, check if we're on the final level -- if yes load credits sequence instead.
				// 	else {
				// 		FinalWinBlockController final = gameObject.GetComponent<FinalWinBlockController>();
				// 		if(final != null) final.BeatFinalLevel();
				// 		currBlock.b_type = Block.BlockType.NONE; // stop processing this block
				// 	}
				// }
				//break;
			case Block.BlockType.GRASS:
			case Block.BlockType.MOVEABLE:
				// do nothing
				return;
			default:
				//Debug.Log("Alpaca is on a none block! // Can occur @ beating level");
				return;
		}
	}


	Block highlighted; // block highlighted if you're holding a block, used as local static variable forHandleFronBlockHighlight()
	void HandleFrontBlockHighlight() {
		if(highlighted != null)
			highlighted.Unhighlight();
		if(!alpaca.HasBlock())
			return;

    	Vector3 dest = alpaca.GetCurrAlpacaDest(clickedWhere);

		highlighted = map.GetHighestBlockBelow(dest);
		if(highlighted != null && GetBlockAt(dest) == null) {
			highlighted.Highlight();
		}
	}

	/**
	 * Changes the alpaca's coordinates depending on the click location, and
	 * the surrounding blocks.
	 */
	void MoveOnClick() {
		// change facing direction before walking in that direction
		if(lastClickedWhere != clickedWhere) {
			alpaca.SetFacingDirection(clickedWhere);
			alpaca.UpdateWalk();
			lastClickedWhere = clickedWhere;
			return;
		}

    	Vector3 curr = alpaca.GetCurrAlpacaLocation();
    	Vector3 dest = alpaca.GetCurrAlpacaDest(clickedWhere);

		// Check that where we're trying to move is acceptable
		if(GetBlockAt(dest) != null) { // Is there a block right in front? --> climb mode
			if(GetBlockAbove(curr) != null) // Is there a block above alpaca?
				return;
			else {
				if(GetBlockAbove(dest) != null) // Is there a block above the block right in front of alpaca?
					return;
				else if(GetBlockAt(dest).b_type != Block.BlockType.WALL && GetBlockAt(dest).b_type != Block.BlockType.NPC) { // Does the block NOT ban walking / is not a wall or NPC?
					// jumpSound.Play();
					dest.y++;
					alpaca.Move(dest);
				}
			}
		} 
		else {
			if(GetBlockBelow(dest) != null) { // Is there a block that can walk on straight?
				if(GetBlockBelow(dest).b_type != Block.BlockType.WALL) { // Is it a block we can walk on?
					alpaca.Move(dest);
				}
			} 
			else { // Should we fall onto a block below and in front of alpaca?
				Block top = map.GetHighestBlockBelow(dest);
				if(top != null && top.b_type != Block.BlockType.WALL && top.b_type != Block.BlockType.NPC) { // Is there a block alpaca can fall on?
					dest = top.getCoords();
					dest.y++;
					alpaca.Move(dest);
				}
			}
		}
    }


#endregion
/*============================================================================*/
#region NPC Interaction
	
	/**
	 * Called from Interact Button UI Elements 
	 */
    public void ClickInteractButt() {
		InteractWithNPC();
    }


	/**
	 * Handle appearance of the interaction button along with highlighting/dehighlighting of NPCs
	 * lastHighlightBlock is used as a local static variable for this functions
	 */
	Block lastHighlightBlock = null; // used to unhighlight block in front
    void UpdateInteractButt() 
	{
    	if(blockButt == null) return;

    	Vector3 curr = alpaca.GetCurrAlpacaLocation();
    	Vector3 dest = alpaca.GetCurrAlpacaDest(clickedWhere);
		Block prevHighlightBlock = lastHighlightBlock;
    	lastHighlightBlock = GetBlockAt(dest); 
		
		if(prevHighlightBlock != null && prevHighlightBlock.isBlockHighlighted() && prevHighlightBlock != lastHighlightBlock) {
			// Dehighlight previously highlighted block if we're no longer looking at it	
			prevHighlightBlock.Unhighlight();
		}

		switch(gameMode) {

			case GameMode.WALKING: // UpdateInteractButt() called on loop when in this gameMode 
				if(lastHighlightBlock != null && lastHighlightBlock.b_type == Block.BlockType.NPC) {
					// If an NPC is in front of you, highlight them and turn on the interact button. 
					if(!lastHighlightBlock.isBlockHighlighted()) {
						lastHighlightBlock.Highlight();
					}
					blockButt.SetToActivated();
				} 
				else {
					blockButt.SetToDeactivated();
				}
				break;

			case GameMode.COMIC: // UpdateInteractButt() called in this gameMode only when button is pressed to activate comic
				blockButt.SetToDeactivated();
				if(lastHighlightBlock != null) {
					lastHighlightBlock.Unhighlight();
				}
				break;

			case GameMode.MINIGAME:
				blockButt.SetToDeactivated();
				if(lastHighlightBlock != null) {
					lastHighlightBlock.Unhighlight();
				}
				break;

			default:
				break;
		}
    }


	void InteractWithNPC() {
    	Vector3 curr = alpaca.GetCurrAlpacaLocation();
    	Vector3 dest = alpaca.GetCurrAlpacaDest(clickedWhere);
    	
		Block clickedBlock = map.GetBlock(dest); // Reference to the NPC we are clicking
		if(clickedBlock.b_type == Block.BlockType.NPC) {
    		NPCInteractionController temp = clickedBlock.coord_obj.GetComponent<NPCInteractionController>();
			if(temp != null) {
				comicController.SetComicAndMinigame(ref temp.comic, temp.minigameSceneName);
				comicController.DisplayComicAndShiftCam();
				gameMode = GameMode.COMIC;
			}
    	} 

		UpdateInteractButt();
		alpaca.StopWalk();
    }



	/* Called by ComicController / GeneralMinigameController
	 * Sets the gameMode and updates UI elements.
	 */
	public void SetMinigameMode(bool set)
	{
		if(set && gameMode != GameMode.MINIGAME) { // set to minigame mode, deactivate block butt and highlighting
			gameMode = GameMode.MINIGAME;
			UpdateInteractButt();
		}
		else if(!set && gameMode == GameMode.MINIGAME) { // deactivate minigame mode
			gameMode = GameMode.WALKING;
		}
	}


#endregion
/*============================================================================*/
#region InputProcessing

	Vector2 clickPos; // Position of click on this update, if is clicking right now
	bool didClick = false; // Whether there was a click the last update (click start/end detection)
	float tilPickup = 0; // Duration between loading picking up block & picking up block
	FacingDirection clickedWhere = FacingDirection.SE; // Currect facing direction of the alpaca
	bool get = false; // Whether or not in process of holding / dropping a block (for animation delay)
	FacingDirection lastClickedWhere = FacingDirection.SE; // used to check if should just change direction or walk
							  // see ClickedWhere() for more
	bool flag = true; // only start the block pick up animation once

	float death_timer = 0.5f; // Used to delay before you can click screen to restart after death

	public FacingDirection AlpClickedWhere() {
		return clickedWhere;
	}

	/**
	 * Processes the input for this update.
	 */
    void ProcessInput() {
		switch(gameMode)
		{
			case GameMode.WALKING: ///// GAME MODE /////
				if(alpaca.IsDead()) {
					death_timer -= Time.deltaTime;
					if(ClickedNow() && death_timer < 0) { // reset on click
						clickedWhere = ClickedWhere();
						SceneManager.LoadSceneAsync( SceneManager.GetActiveScene().name );
					}
					return;
				}

				if(!ClickedNow() && didClick) { // click just ended
					alpaca.StopWalk();
					ClearHighlights();
					flag = true;
					lastClickedWhere = clickedWhere;
				} 
				else if(ClickedNow()) { // click is happening
					clickPos = Input.mousePosition;
					if(ClickedWhere() == FacingDirection.NONE){
						return;
					}
					clickedWhere = ClickedWhere();
					HighlightQuadrant();
					if(!alpaca.isAlpacaMoving()){
						MoveOnClick();
					}
				}
				HandleFrontBlockHighlight();
				UpdateInteractButt();
				didClick = ClickedNow();
				break;

			case GameMode.COMIC: ///// COMIC MODE /////
				if(!comicController.isComicActive()) {
					gameMode = GameMode.WALKING;
				}
				break;
				
			case GameMode.MINIGAME: ///// MINIGAME MODE /////
				// Exiting MINIGAME mode is handled by the GeneralMinigameController which calls SetMinigameMode()
				break;

			default:
				break;
		}
	}

	/**
	 * Returns true iff there was a click during this update.
	 */
	bool ClickedNow() {
		// check if is on ui button (this version works for mobile too)
		PointerEventData eventDataCurrentPosition = new PointerEventData(EventSystem.current);
		eventDataCurrentPosition.position = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
		List<RaycastResult> results = new List<RaycastResult>();
		EventSystem.current.RaycastAll(eventDataCurrentPosition, results);

		return Input.GetMouseButton(0) && !(results.Count > 0) && end_timer == 0;
	}

	/**
	 * Also used in Lvl1Tutorial
	 */
	// Used to determine which quadrant is clicked
	int padding = Screen.height / 12; // do not process if user clicks too close to boundary
    int middle_x = Screen.width / 2;
    int middle_y = Screen.height / 2;

    /**
     * Returns which quadrant the click this update was on.
     *  -----------
	 * |  0  |  1  |
	 * |-----------
	 * |  3  |  2  |
	 *  -----------
	 *
	 *  Returns-1 if too close to the boundary
     */
    FacingDirection ClickedWhere() {
		if(clickPos.x < middle_x - padding) {
			if (clickPos.y < middle_y - padding) return FacingDirection.SW;
			else if(clickPos.y > middle_y + padding) return FacingDirection.NW;
		} else if(clickPos.x > middle_x + padding) {
			if (clickPos.y < middle_y - padding) return FacingDirection.SE;
			else if(clickPos.y > middle_y + padding) return FacingDirection.NE;
		}
		return FacingDirection.NONE;
    }
}

#endregion