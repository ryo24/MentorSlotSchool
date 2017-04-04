using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollScript : MonoBehaviour {
	float speed = 12.0f;

	public float posX;
	public float startPosition;
	public float endPosition;
	public bool isStop;

	// Use this for initialization
	void Start () {
		posX  =this.transform.position.x;
//		startPosition  = this.transform.position.y;
		startPosition  = 19.0f;
		endPosition = -16.5f;
		isStop = false;
		
	}
	
	// Update is called once per frame
	void Update () {
		Scroll();
	}

	void Scroll(){
		if(!isStop){
			transform.Translate(0, -1 * speed * Time.deltaTime,0);

			if(this.transform.position.y <= endPosition){
				ScrollEnd();
			}
		}
	}

	void ScrollEnd(){
		transform.Translate( 0, 1 * (startPosition - endPosition),0);
	}

}
