using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TacoRunnerGameManager : GeneralMinigameController
{
    /* Singleton instance */
    public static TacoRunnerGameManager instance;

    /* Constants */
    // [SerializeField] private float dropY; // y coordinate of an instantiated note

    // /* References */
    [SerializeField] private Canvas canvas; // This minigame requires the canvas have a ref to the world's camera
    [SerializeField] private TacoPlayer tacoPlayer;
    [SerializeField] private Text scoreText;

    // /* Refs to prefabs to be instantiate */
    public Sprite[] ingredientSprites; // Reference to all possible sprites of ingredients

    /** Game Settings **/
    [SerializeField] private float bpm; // BPM of background song
    [SerializeField] private int measure; // Measure of background song
    [SerializeField] private float songLengthInSeconds;
    [SerializeField] private float travelBeats; // amount of beats it takes note to get from right to left
    private float spb; // seconds-per beat

    /** Obstacle Generation **/
    private float obstacleSpeed;
    [Range(0,100)][SerializeField] private float obstacleIngredientProbability;
    [SerializeField] private float obstacleVerticalSpacing;
    [SerializeField] private float jumpOnBeatOffset; // off set to obstacle speed so player can always tap on beat and land on the obstacle
    // List of all obstacle prefabs
    [SerializeField] private float obstacleSpawnX; // x-coord that obstacles spawn at
    [SerializeField] private GameObject obstaclePrefab;
    // List of all valid combinations of obstacles. The size of each group = the measure of the song.
    // A = floor, B = row 1, C = row 2, D = row 3
    // Note, because this list is generated ahead of time by the generateTacoMeasures.py script, thus
    // the song measure must be known ahead of time and this list must be regenerated for that. 
    private char[][] possibleObstacleGroups = new char[][] {
                                                        new char[]{'A', 'A', 'A', 'A'},
                                                        new char[]{'A', 'A', 'A', 'B'},
                                                        new char[]{'A', 'A', 'B', 'A'},
                                                        new char[]{'A', 'A', 'B', 'B'},
                                                        new char[]{'A', 'A', 'B', 'C'},
                                                        new char[]{'A', 'B', 'A', 'A'},
                                                        new char[]{'A', 'B', 'A', 'B'},
                                                        new char[]{'A', 'B', 'B', 'A'},
                                                        new char[]{'A', 'B', 'B', 'B'},
                                                        new char[]{'A', 'B', 'B', 'C'},
                                                        new char[]{'A', 'B', 'C', 'A'},
                                                        new char[]{'A', 'B', 'C', 'B'},
                                                        new char[]{'A', 'B', 'C', 'C'},
                                                        new char[]{'A', 'B', 'C', 'D'},
                                                        new char[]{'B', 'A', 'A', 'A'},
                                                        new char[]{'B', 'A', 'A', 'B'},
                                                        new char[]{'B', 'A', 'B', 'A'},
                                                        new char[]{'B', 'A', 'B', 'B'},
                                                        new char[]{'B', 'A', 'B', 'C'},
                                                        new char[]{'B', 'B', 'A', 'A'},
                                                        new char[]{'B', 'B', 'A', 'B'},
                                                        new char[]{'B', 'B', 'B', 'A'},
                                                        new char[]{'B', 'B', 'B', 'B'},
                                                        new char[]{'B', 'B', 'B', 'C'},
                                                        new char[]{'B', 'B', 'C', 'A'},
                                                        new char[]{'B', 'B', 'C', 'B'},
                                                        new char[]{'B', 'B', 'C', 'C'},
                                                        new char[]{'B', 'B', 'C', 'D'},
                                                        new char[]{'B', 'C', 'A', 'A'},
                                                        new char[]{'B', 'C', 'A', 'B'},
                                                        new char[]{'B', 'C', 'B', 'A'},
                                                        new char[]{'B', 'C', 'B', 'B'},
                                                        new char[]{'B', 'C', 'B', 'C'},
                                                        new char[]{'B', 'C', 'C', 'A'},
                                                        new char[]{'B', 'C', 'C', 'B'},
                                                        new char[]{'B', 'C', 'C', 'C'},
                                                        new char[]{'B', 'C', 'C', 'D'},
                                                        new char[]{'B', 'C', 'D', 'A'},
                                                        new char[]{'B', 'C', 'D', 'B'},
                                                        new char[]{'B', 'C', 'D', 'C'},
                                                        new char[]{'B', 'C', 'D', 'D'},
                                                        }; 
    private char[][] measureAndBeat2Obstacle; 

    /** Internal Game Data **/
    private int beatCount;
    private int measureCount;
    private bool waiting; // whether we are waiting to spawn the next beat
    int score;
    int multiplier;


    private void Awake() {
        instance = this;
        spb = 60.0f/bpm;
        obstacleSpeed = (obstacleSpawnX - tacoPlayer.getX() - jumpOnBeatOffset)/(travelBeats*spb);
        beatCount = 0;
        measureCount = 0;
        waiting = false;
        score = 0;
        multiplier = 1;

        // Randomly fill the obstacle list with the possible combinations
        int songMeasures = (int)Mathf.Ceil((songLengthInSeconds/spb)/(float)measure);
        measureAndBeat2Obstacle = new char[songMeasures][];
        for(int i = 0; i < measureAndBeat2Obstacle.Length; i++) {
            measureAndBeat2Obstacle[i] = possibleObstacleGroups[Random.Range(0, possibleObstacleGroups.Length)];
        }
    }


    void Start()
    {
        base.Start();
        AudioManager.PlaySound("Background");
        tacoPlayer.Init();

    }


    // Update is called once per frame
    void Update()
    {
        base.Update();
        if(playing) {
            if(!waiting) {
                StartCoroutine(CountBeat(spb));
            }
            if(score >= 20 || measureCount >= measureAndBeat2Obstacle.Length - 1) {
                EndMinigame();
            }
        }
    }


// ============================================================================================ //
#region Scoring


//     /** Called when any of the on-screen buttons are clicked. 
//       * buttIndex is unique to each button and corresponds to that button's lane.
//       * Checks if any note is in the clickableNotes array for this button's lane. If 
//       * so, disable it and check how lined up to the button the note was for scoring. 
//       */
//     public void ClickedButt(int buttIndex) 
//     {
//         // hitEffect gameObject that will be generated will appear at coordinates around the pressed button
//         float effectX = buttTransforms[buttIndex].position.x + Random.Range(-0.5f * buttTransforms[0].sizeDelta.x, 0.5f * buttTransforms[0].sizeDelta.x);
//         float effectY = buttTransforms[buttIndex].position.y + Random.Range(-0.5f * buttTransforms[0].sizeDelta.y, 0.5f * buttTransforms[0].sizeDelta.y);

//         if(instance.clickableNotes != null && instance.clickableNotes[buttIndex] != null) // hit a note
//         {
//             NoteObject n = instance.clickableNotes[buttIndex]; // get the note we just clicked & deactivate it
//             instance.clickableNotes[buttIndex] = null;         // stop note occupying this space
//             float dist = Mathf.Abs(n.GetY() - instance.buttTransforms[0].anchoredPosition.y);
//             DestroyImmediate(n.gameObject);

//             // Resolve note
//             if(dist <= 15) {
//                 Debug.Log("PERFECT!");
//                 GenerateHitEffect(3, effectX, effectY);
//                 UpdateScore(3);
//             }
//             else if(dist <= 30) {
//                 Debug.Log("Good!");
//                 GenerateHitEffect(2, effectX, effectY);
//                 UpdateScore(2);
//             }
//             else {
//                 Debug.Log("Okay!");
//                 GenerateHitEffect(1, effectX, effectY);
//                 UpdateScore(1);
//             }
//         }
//         else { // hit nothing
//             Debug.Log("PENALTY");
//             GenerateHitEffect(0, effectX, effectY);   
//             UpdateScore(-1);   
//         }
//     }


    public void UpdateScore(int incr)
    {
        if(score + incr >= 0){
            score += multiplier * incr;
            scoreText.text = "Score: " + score;
        }
    }


//     void GenerateHitEffect(int effect, float x, float y)
//     {
//         GameObject hitFXObj = Instantiate(hitEffects[effect], Vector3.zero, Quaternion.identity); 
//         hitFXObj.transform.SetParent(canvasTransform);
//         hitFXObj.GetComponent<HitEffect>().Init(x, y);
//     }


#endregion
// ============================================================================================ //
#region ObstacleGeneration


    /** Called on the seconds per beat
        Generates an obstacle based on the current song measureCount and beatCount then waits to be 
        callable until the next beat **/
    private IEnumerator CountBeat(float s)
    {
        waiting = true;
        GenerateObstacle(measureAndBeat2Obstacle[measureCount][beatCount]);
        beatCount++;
        if(beatCount == measure) {
            measureCount++;
            beatCount = 0;
        }
        yield return new WaitForSeconds(s);
        waiting = false;
    }


    /** Generate an obstacle based on the argument character code 
      */
    private void GenerateObstacle(char x)
    {
        Vector3 pos = new Vector3();
        bool hasIngredient = (Random.Range(0, 100) < obstacleIngredientProbability);

        // Place the obstacle in its proper row
        switch(x) {
            case 'A':
                pos.Set(obstacleSpawnX, -298f, -100);
                break;
            case 'B':
                pos.Set(obstacleSpawnX, -198f, -100);
                break;
            case 'C':
                pos.Set(obstacleSpawnX, -198f + obstacleVerticalSpacing, -100);
                break;
            case 'D':
                pos.Set(obstacleSpawnX, -198f + 2*obstacleVerticalSpacing, -100);
                break;
            default:
                break;
        }
        GameObject obj = Instantiate(obstaclePrefab, canvasTransform); 
        obj.GetComponent<TacoObstacle>().Init(pos, obstacleSpeed, hasIngredient);
    }

#endregion
// ============================================================================================ //
}
