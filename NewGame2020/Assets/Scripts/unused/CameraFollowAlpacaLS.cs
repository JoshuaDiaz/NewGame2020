﻿using UnityEngine;

public class CameraFollowAlpacaLS : MonoBehaviour
{
    public Transform target;
    public float smoothSpeed = 0.125f;
    public Vector3 offset;

    void LateUpdate(){
        Debug.Log("IN USE");
        Vector3 desiredPosition = target.position + offset;
        Vector3 smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed);
        transform.position = smoothedPosition; 
    }
}
