using UnityEngine;

public class TacoObstacle : MonoBehaviour
{
    private bool go;
    private float noteSpeed;

    [SerializeField] private bool hasIngredient;
    [SerializeField] private SpriteRenderer attachedIngredient;


    public void Init(Vector3 pos, float noteSpeed, bool hasIngredient)
    {
        transform.localPosition = pos;
        this.noteSpeed = noteSpeed;
        this.hasIngredient = hasIngredient;
        
        if(hasIngredient) {
            attachedIngredient.sprite = 
                TacoRunnerGameManager.instance.ingredientSprites[Random.Range(0, TacoRunnerGameManager.instance.ingredientSprites.Length)];
        } 
        else {
            attachedIngredient.gameObject.SetActive(false);
        }

        go = true;
    }


    void Update()
    {
        if(go) {
            transform.localPosition -= new Vector3(noteSpeed*Time.deltaTime, 0, 0); 
        }
    }


    private void OnTriggerEnter2D(Collider2D other) 
    {
        if(other.name == ("TacoDestroyer")) {
            Destroy(gameObject);
        }
    }
}
