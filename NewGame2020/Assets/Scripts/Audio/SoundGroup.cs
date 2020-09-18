using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundGroup : MonoBehaviour
{
    public enum SoundGroup_t {TITLE, STREET, MINIGAME};

    public SoundGroup_t groupType;
    
    public Sound[] sounds;

}
