using System;
using UnityEngine;
using UnityEngine.Audio;


public class AudioManager : MonoBehaviour
{
    private SoundGroup sg; // current soundgroup for the scene
    
    private static AudioManager instance; // singleton global audio manager throughout entire game 

    private bool sameSgAsLast; // only set for instance, accessed by SceneLoadController


    /**
     * Initialize singleton audio manager / change its sound group if a scene with different sound group is loaded
     */
    public void Awake()
    {
        sg = gameObject.GetComponent<SoundGroup>();

        // keep only one audioman instance
        if(instance != null) {
            // change soundgroup if needed
            if(sg != null && instance.sg.groupType != this.sg.groupType) {
                instance.ChangeSoundGroup(this.sg);
                instance.sameSgAsLast = false;
            }
            else {
                instance.sameSgAsLast = true;
            }
            // "Disable" This audioMan, but still make it searchable 
            gameObject.name = "InactiveAudioMan";
            sg.enabled = false;
            this.enabled = false;
        }
        else { // initialize the first audioMan. Only ever accessed by static instance.
               // NOTE: This implementation causes the first encounterd AudioMan to no longer be acessible, unless that first scene is reloaded
            instance = this;
            instance.sameSgAsLast = false;
            DontDestroyOnLoad(gameObject);
            ChangeSoundGroup(sg);
            gameObject.name = "AudioMan";
            PlaySound("Background"); // NOTE: Move PlaySound to SceneLoadController somehow?
        }
    }


    /**
     * Called when a new scene with a different sound group is loaded.
     * Change the global audioMan's sound group to that of the currently
     * loaded scene. 
     */
    private void ChangeSoundGroup(SoundGroup sg)
    {
        // Remove all audiosources associated with old sound group
        AudioSource x = gameObject.GetComponent<AudioSource>();
        while(x != null) {
            if(x.isPlaying) {
                x.Stop();
            }
            DestroyImmediate(x); // POSSIBLE IMPROVEMENT: add new sounds and delete old ones asynchronously?
            x = gameObject.GetComponent<AudioSource>();
        }

        // Add new audiosources for the new sound group
        foreach(Sound s in sg.sounds) {
            s.initSoundSource(gameObject.AddComponent<AudioSource>());
        }

        // update global audioMan's grouptype and Sound class reference array
        this.sg.groupType = sg.groupType;
        this.sg.sounds = sg.sounds;
    }


    public static bool isSgSameAsLast()
    {
        return instance.sameSgAsLast;
    }


    /**
     * Play the sound in the current sound group that has the argument name
     */
    public static void PlaySound(string name)
    {
        if(instance != null) {
            Sound s = Array.Find(instance.sg.sounds, sound => sound.name == name);
            if(s != null) {
                s.source.Play();
            }
            else {
                Debug.Log("NO SOUND BY NAME: " + name);
            }
        }
        else {
            Debug.Log("No AudioMan Found!");
        }
    }


    public static void StopSound(string name)
    {
        if(instance != null) {
            Sound s = Array.Find(instance.sg.sounds, sound => sound.name == name);
            if(s != null) {
                s.source.Stop();
            }
            else {
                Debug.Log("NO SOUND BY NAME: " + name);
            }
        }
        else {
            Debug.Log("No AudioMan Found!");
        }
    }
}
