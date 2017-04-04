using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SlotParent : MonoBehaviour {
	int childNumber = 15;

	public GameObject[] childs = new GameObject[14];
	public GameObject target;
	public float distance;

	// Use this for initialization
	void Start () {
		distance = 0.0f;
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void StopChild(){
		Debug.Log("StopChild");
		for(int i = 0; i < childNumber; i++){
			childs[i].GetComponent<ScrollScript>().isStop = true;
		}

		distance = Mathf.Abs(this.transform.position.y - target.transform.position.y) ;
		Debug.Log(distance);

				
	}

	public void StartChild(){
		Debug.Log("StartChild");
		for(int i = 0; i < childNumber; i++){
			childs[i].GetComponent<ScrollScript>().isStop = false;
		}

	}

}
