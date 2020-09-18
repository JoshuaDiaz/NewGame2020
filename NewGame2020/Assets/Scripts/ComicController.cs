using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ComicController : MonoBehaviour
{
    /** Constants **/
    private const float comicSlideSpeedTypical = 1.5f; // Speed at which comic slides left in or right
    private float comicSlideSpeed;    
    private Vector2 comicDisplayedPos = new Vector2(-275.0f, 0);
    private Vector2 comicShowMinigamePos = new Vector2(-1350.0f, 0);
    private Vector2 comicHiddenPos = new Vector2(275.0f, 0);

    /** References to UI Elements **/
    public GameObject comicFrameUI; // Ref to the actual UI element of the Comic Frame in Canvas
    private RectTransform comicFrameUITransform; // Ref to the RectTransform component of the Comic Frame
    public Image comicFrameImage; // Ref to the Image component of Comic Frame's child GameObject, Comic Image
    public Image nextPageButtImage; // Ref to the Image component of the Next Page Button
    public Image prevPageButtImage; // Ref to the Image component of the Prev Page Button
    public  Button playButt; // Ref to the Play Button UI Component
    public Image playButtImage; // Ref to the Image component of the Play Button
    public Sprite playButtGray, playButtNormal; // Images of the play button grayed out and normal
    public CameraController cameraController; // Reference to the main camera controller in the worldscript 

    /** Internal State Variables**/
    private ComicCollection comic; // comic that is currently in the frame, if there is one at all.
    private string minigameName; // minigame scene to transition to at the end of the comic, if there is one
    private int currPage; // The page of the comic that we are flipped to
    private enum SlideState{STATIONARY, SLIDE_LEFT_IN, SLIDE_LEFT_OUT, SLIDE_RIGHT};
    private SlideState slideState; // Track the sliding movement of the comic UI


    void Awake()
    {
        comicFrameUITransform = comicFrameUI.GetComponent<RectTransform>();
    }


    void Start() 
    {
        comicFrameUI.SetActive(false);
        currPage = 0;
        slideState = SlideState.STATIONARY;  
        playButt.interactable = false; 
        prevPageButtImage.enabled = false;
        nextPageButtImage.enabled = false;
    }


    /*
     * Update() is used to resolve the sliding in/out of the comic frame UI
     */
    private float lerp_timer; // Timer used for lerp-ing the comic into desired position
    void Update()
    {
        // resolve sliding of the comic frame UI
        switch(slideState) {

            case SlideState.SLIDE_LEFT_IN: 
                lerp_timer += comicSlideSpeed * Time.deltaTime;
			    comicFrameUITransform.anchoredPosition = Vector2.Lerp(comicFrameUITransform.anchoredPosition, comicDisplayedPos, lerp_timer);
                if(Mathf.Abs(comicFrameUITransform.anchoredPosition.x - comicDisplayedPos.x) <= 0.05) { // change state if the comic is done sliding
                    comicFrameUITransform.anchoredPosition = comicDisplayedPos;
                    slideState = SlideState.STATIONARY;
                }
                break;

            case SlideState.SLIDE_LEFT_OUT: 
			    comicFrameUITransform.anchoredPosition = Vector2.Lerp(comicFrameUITransform.anchoredPosition, comicShowMinigamePos, lerp_timer);
                lerp_timer += comicSlideSpeed * Time.deltaTime;
                if(Mathf.Abs(comicFrameUITransform.anchoredPosition.x - comicShowMinigamePos.x) <= 0.05) { // change state if the comic is done sliding
                    comicFrameUITransform.anchoredPosition = comicShowMinigamePos;
                    slideState = SlideState.STATIONARY;
                }
                break;

            case SlideState.SLIDE_RIGHT: 
                lerp_timer += comicSlideSpeed * Time.deltaTime;
			    comicFrameUITransform.anchoredPosition = Vector2.Lerp(comicFrameUITransform.anchoredPosition, comicHiddenPos, lerp_timer);
                if(Mathf.Abs(comicFrameUITransform.anchoredPosition.x - comicHiddenPos.x) <= 0.05) { // change state and hide comic if the comic is done sliding
                    comicFrameUITransform.anchoredPosition = comicHiddenPos;
                    slideState = SlideState.STATIONARY;
                    comicFrameUI.SetActive(false);
                    currPage = 0;
                }
                break;

            case SlideState.STATIONARY:
            default:     
                break;
        }
    }


    /**
     * Set the comic controller's current comic collection and minigame scene name
     */
    public void SetComicAndMinigame(ref ComicCollection cc, string minigameSceneName)
    {
        this.comic = cc;
        this.minigameName = minigameSceneName;
        if(this.comic == null)
            Debug.Log("NO COMIC FOUND");
    }


    /**
     * Displays comic frame UI and sets slideState to SLIDE_LEFT which Update() 
     * will use to slide it in.
     * Also shifts the camera to the comic's position.
     */
    public void DisplayComicAndShiftCam(float speed = comicSlideSpeedTypical)
    {
        // Set UI Elements
        comicFrameImage.sprite = comic.panels[0];
        comicFrameUI.SetActive(true);
        nextPageButtImage.enabled = (comic.getSize() > 1);
        prevPageButtImage.enabled = false;
        currPage = 0;

        // Start slide
        lerp_timer = 0;
        comicSlideSpeed = speed;
        slideState = SlideState.SLIDE_LEFT_IN;
        cameraController.shiftCamToComic();
    }


    /**
    * Called from the "EXIT" button on the comic UI itself.
    * Sets the comic's slideState to shift it off the screen. The Update()
    * method will handle the actual shifting based on the slideState.
    * This method also shifts the camera back to alpaca, reverting it to its
    * normal state.  
    */
    public void HideComicAndShiftCam(float speed = comicSlideSpeedTypical)
    {
        // Disable Comic UI Objects
        playButtImage.sprite = playButtGray;
        playButt.interactable = false;
        currPage = -1;

        // Start slide
        lerp_timer = 0;
        comicSlideSpeed = speed;
        slideState = SlideState.SLIDE_RIGHT;
        cameraController.shiftCamToAlpaca();
    }

    
    public void SlideComicLeftAndOut(float speed = comicSlideSpeedTypical)
    {
        // Disable Comic UI Objects
        playButtImage.sprite = playButtGray;
        playButt.interactable = false;
        currPage = -1;

        // Start slide
        lerp_timer = 0;
        comicSlideSpeed = speed;
        slideState = SlideState.SLIDE_LEFT_OUT;
    }


    /**
     * Called when "NEXT PAGE" button is clicked on the comic UI 
     * Note: This is only callable if currPage < comic.numPages, otherwise the button is hidden 
     * (button hiding also done in this method)
     */
    public void ClickNextPageButt()
    {
        // nextPageButtImage should be enabled if this condition is met
        if(currPage < comic.getSize() - 1) {
            currPage++;
            comicFrameImage.sprite = comic.getPanel(currPage);

            // hide nextPageButtImage & make play butt selectable once we get to last page
            if(currPage >= (comic.getSize() - 1)) {
                nextPageButtImage.enabled = false;
                if(minigameName != null) {
                    playButtImage.sprite = playButtNormal;
                    playButt.interactable = true;
                }
            }

            //reappear prevPageButtImage is it was gone
            if(!prevPageButtImage.enabled && currPage > 0) {
                prevPageButtImage.enabled = true;
            }
        }
    }


    /**
     * Called when "PREV PAGE" button is clicked on the comic UI
     * Note: This is only callable if currPage > 0, otherwise the button is hidden 
     * (button hiding also done in this method)
     */
    public void ClickPrevPageButt()
    {
        // prevPageButtImage should be enabled if this condition is met
        if(currPage > 0) {
            currPage--;
            comicFrameImage.sprite = comic.getPanel(currPage);

            // hide prevPageButtImage once we get to first page
            if(currPage <= 0) { 
               prevPageButtImage.enabled = false;
            }

            //reappear nextPageButtImage is it was gone
            if(!nextPageButtImage.enabled && currPage < (comic.getSize() - 1)) {
                nextPageButtImage.enabled = true;
                playButtImage.sprite = playButtGray;
                playButt.interactable = false;
            }  
        }
    }


    /**
     * Called when "play" button is clicked on the comic UI.
     * Note: This will only be called when playButt.interactable == true, which only
     * occurs on the final page of the comic
     * Loads the minigame. Comic slide-out and gamemode setting are done by minigame controller
     * to make relative timing of those actions non-reliant on scene load time.
     */
    public void ClickPlayButt()
    {
        if(minigameName != null && minigameName != "") {
            SceneManager.LoadSceneAsync(minigameName, LoadSceneMode.Additive);
        }
        else {
            Debug.Log("No Minigame!");
        }
    }


    public bool isComicActive()
    {
        return comicFrameUI.activeSelf;
    }

}
