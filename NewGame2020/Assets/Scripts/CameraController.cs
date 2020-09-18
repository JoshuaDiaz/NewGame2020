using UnityEngine;

public class CameraController : MonoBehaviour
{
    public Transform target;
    public float smoothSpeed;
    public Vector3 offset;

    private bool shiftToAlpaca; // Whether we shifting from comic to alpaca

    private Vector3 comicCameraPosOffset = new Vector3(2.25f, 0, 2.25f); // amount to offset camera by when focusing on comic
    private bool shiftToComic; // Whether we shifting from alpaca to comic


    /**
     * Camera follows alpaca by default
    */
    void Start() {
        shiftToAlpaca = true;
        shiftToComic = false;    
        smoothSpeed = 1.0f;
    }


    /**
     * LateUpdate() handles the smooth shifting of the camera to its target
    */
    void LateUpdate(){
        Vector3 desiredPosition = target.position + offset; // follow alpaca by default
        
        if(shiftToAlpaca) { // If shifting cam from comic to alpaca, and have finished shifting over, pick up cam follow speed
            if(Mathf.Abs(Vector3.Distance(desiredPosition, transform.position)) <= 0.1f) {
                smoothSpeed = 1.0f;
                shiftToAlpaca = false;
            }
        }
        else if(shiftToComic) { // Offset camera to focus on comic, if desired
            desiredPosition += comicCameraPosOffset;
        }

        Vector3 smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed);
        transform.position = smoothedPosition;
    }

    public void shiftCamToComic()
    {
        smoothSpeed = 0.05f;
        shiftToAlpaca = false;
        shiftToComic = true;
    }

    public void shiftCamToAlpaca()
    {
        smoothSpeed = 0.2f;
        shiftToAlpaca = true;
        shiftToComic = false;
    }
}
