﻿using UnityEngine;

/**
 * General controller for all minigames. Controls basic functionality of controlling the 
 * minigame scene. Should always be attached to MinigameSceneContainerObject 
 */
public class GeneralMinigameController : MonoBehaviour
{
    [SerializeField] protected RectTransform canvasTransform;
    [SerializeField] private float moveSpeed, scaleSpeed;
    private WorldScript worldRef;
    protected GameObject overworldCamera;
    protected bool playing;

    private Vector3 initPos, initScale;
    protected void Start()
    {
        playing = false;
        worldRef = GameObject.FindWithTag("WORLD").GetComponent<WorldScript>();
        overworldCamera = GameObject.FindWithTag("MainCamera");
        initPos = canvasTransform.anchoredPosition;
        initScale = canvasTransform.localScale;
        if(worldRef != null) {
            worldRef.SetMinigameMode(true);
            worldRef.comicController.SlideComicLeftAndOut(moveSpeed);
        }
        AudioManager.PlaySound("RecordScratch");
    }


    float lerp_timer = 0 , lerp_timer2 = 0;
    // Update is called once per frame
    protected void Update()
    {
        if(!playing) {
            if(Mathf.Abs(Vector2.Distance(canvasTransform.anchoredPosition, Vector2.zero)) > 0.01f) { // slide game in
                canvasTransform.anchoredPosition = Vector2.Lerp(initPos, Vector2.zero, lerp_timer);
                lerp_timer += moveSpeed*Time.deltaTime;
            }
            else if(Mathf.Abs(Vector3.Distance(canvasTransform.localScale, Vector3.one)) > 0.01f) { // scale game to window
                canvasTransform.localScale = Vector3.Lerp(initScale, Vector3.one, lerp_timer2);
                lerp_timer2 += scaleSpeed*Time.deltaTime;
            }
            else { // set final positions, start game
                canvasTransform.anchoredPosition = Vector2.zero;
                canvasTransform.localScale = Vector3.one;
                lerp_timer = lerp_timer2 = 0;
                overworldCamera.SetActive(false);
                playing = true;
            }
        }
    }


    public void EndMinigame()
    {
        AudioManager.PlaySound("RecordScratch");
        GameObject.Find("InactiveAudioMan").GetComponent<AudioManager>().Awake(); // restore overworld audioMan
        AudioManager.PlaySound("Background");
        worldRef.SetMinigameMode(false); // turn off minigame mode
        overworldCamera.SetActive(true); // restore overworld camera
        worldRef.comicController.HideComicAndShiftCam(moveSpeed);
        DestroyImmediate(gameObject); // destroy the minigame
    }
}
