using UnityEngine;
using UnityEngine.Audio;

/****************************************
*** SOUNDS ARE CREATED AS COMPONENTS IN SoundGroup INSTANCES.
*****************************************/
[System.Serializable]
public class Sound
{
    public string name;

    public AudioClip clip;

    public bool loop;

    [Range(0f, 1f)]
    public float volume = 1.0f;

    [Range(0.1f, 3f)]
    public float pitch = 1.0f;

    [HideInInspector]
    public AudioSource source;


    public void SetVolume(float v)
    {
        if(source != null) {
            source.volume = v;
            volume = v;
        }
    }


    public void initSoundSource(AudioSource a)
    {
        if(a == null) {
            return;
        }

        this.source = a;
        this.source.loop = loop;
        this.source.volume = this.volume;
        this.source.pitch = this.pitch;
        this.source.clip = this.clip;
    }
}
