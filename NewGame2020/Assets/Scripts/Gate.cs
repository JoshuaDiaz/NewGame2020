using UnityEngine;

[System.Serializable]
public class Gate
{
    public string sceneName; // The scene that this gate will take you to

    public Vector3 gateCoords; // The coordinates of the block this gate is associated with

    public Vector3 playerEnteredSpawnPos; // The coordinates the player will spawn at if they entered from the other end of this gate

    public FacingDirection playerEnteredSpawnDir;
}
