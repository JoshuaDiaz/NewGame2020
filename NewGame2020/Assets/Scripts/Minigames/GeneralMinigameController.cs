using UnityEngine;

/**
 * General controller for all minigames. Controls basic functionality of controlling the 
 * minigame scene. Should always be attached to MinigameSceneContainerObject 
 */
public class GeneralMinigameController : MonoBehaviour
{
    [SerializeField] protected RectTransform canvasTransform;
    [SerializeField] private float moveSpeed, scaleSpeed;
    private bool initializing;
    private WorldScript worldRef;
    protected bool playing;


    protected void Start()
    {
        initializing = true;
        playing = false;
        // worldRef = GameObject.FindWithTag("WORLD").GetComponent<WorldScript>();
        // if(worldRef != null) {
        //     worldRef.SetMinigameMode(true);
        //     worldRef.comicController.SlideComicLeftAndOut(moveSpeed);
        // }
        AudioManager.PlaySound("RecordScratch");
    }


    float lerp_timer = 0 , lerp_timer2 = 0;
    // Update is called once per frame
    protected void Update()
    {
        if(initializing) {
            if(Mathf.Abs(Vector2.Distance(canvasTransform.anchoredPosition, Vector2.zero)) > 0.01f) { // slide game in
                canvasTransform.anchoredPosition = Vector2.Lerp(canvasTransform.anchoredPosition, Vector2.zero, lerp_timer);
                lerp_timer += moveSpeed*Time.deltaTime;
            }
            else if(Mathf.Abs(Vector3.Distance(canvasTransform.localScale, Vector3.one)) > 0.01f) { // scale game to window
                canvasTransform.localScale = Vector3.Lerp(canvasTransform.localScale, Vector3.one, lerp_timer2);
                lerp_timer2 += scaleSpeed*Time.deltaTime;
            }
            else { // set final positions, start game
                canvasTransform.anchoredPosition = Vector2.zero;
                canvasTransform.localScale = Vector3.one;
                initializing = false;
                lerp_timer = lerp_timer2 = 0;
                playing = true;
                AudioManager.PlaySound("Background");
            }
        }
    }


    public void EndMinigame()
    {
        GameObject.Find("InactiveAudioMan").GetComponent<AudioManager>().Awake(); // restore overworld audioMan
        AudioManager.PlaySound("Background");
        worldRef.SetMinigameMode(false); // turn off minigame mode
        worldRef.comicController.HideComicAndShiftCam(moveSpeed);
        DestroyImmediate(gameObject); // destroy the minigame
    }
}
