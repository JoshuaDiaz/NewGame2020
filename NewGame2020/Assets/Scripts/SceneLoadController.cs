using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoadController : MonoBehaviour
{

    private static string prevSceneName;

    private static string currSceneName;

    [SerializeField] private Alpaca alpaca;
    [SerializeField] private Gate[] gates; // Collection of all gates connecting this scene to others


    /* Update the current scene name and set the Player's spawn point */
    void Start()
    {
        currSceneName = "Scenes/" + SceneManager.GetActiveScene().name;
        
        // Find gate corresponding to previous scene to set player's spawn point
        if(prevSceneName != null) {
            Gate spawnGate = Array.Find(gates, g => g.sceneName == prevSceneName);
            if(spawnGate != null) {
                alpaca.SetAlpacaSpawn(spawnGate.playerEnteredSpawnPos, spawnGate.playerEnteredSpawnDir);
            }
        }

        // Play background music
        if(!AudioManager.isSgSameAsLast()) {
            AudioManager.PlaySound("Background");
        }
    }


    public void LoadScene(Vector3 exitPos)
    {
        prevSceneName = currSceneName;
        string nextScene = Array.Find(gates, g => g.gateCoords == exitPos).sceneName;
        SceneManager.LoadScene(nextScene, LoadSceneMode.Single);
    }
}
