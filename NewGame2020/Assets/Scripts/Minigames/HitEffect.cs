using UnityEngine;

public class HitEffect : MonoBehaviour
{

    [Range(0.01f, 10f)]
    [SerializeField] private float duration;
    [SerializeField] private float climbHeight; // height the effect climbs within the duration
    RectTransform rt;

    float lerpCount;
    Vector2 climbPos;
    bool init = false;


    public void Init(float spawnX, float spawnY)
    {
        rt = gameObject.GetComponent<RectTransform>();
        rt.position = new Vector3(spawnX, spawnY, 0);
        rt.localScale = new Vector3(2, 2, 2);
        lerpCount = 0;
        climbPos = new Vector3(rt.anchoredPosition.x, rt.anchoredPosition.y + climbHeight, 0);
        init = true;
    }

    
    void Update()
    {
        if(init){
            rt.anchoredPosition = Vector3.Lerp(rt.anchoredPosition, climbPos, lerpCount);
            lerpCount += Time.deltaTime/duration;
            if(lerpCount >= duration) {
                DestroyImmediate(gameObject);
            }
        }
    }
}
