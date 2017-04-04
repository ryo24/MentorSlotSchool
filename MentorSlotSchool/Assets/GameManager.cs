using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour {

	int slotNumber;
	float score;
	public GameObject[] slotParent = new GameObject[3];
	public Text answerText;
	public Text[] mentorNames = new Text[3];

	// Use this for initialization
	void Start () {
		resetNumber();
	}
	
	// Update is called once per frame
	void Update () {

		if(Input.GetKeyDown(KeyCode.Space)){
			Debug.Log("stop and number = " + slotNumber);
			if(slotNumber >= 4){
				return;
			}
			slotParent[slotNumber].GetComponent<SlotParent>().StopChild();
			slotNumber++;
			if(slotNumber == 4){
				Result();
			}
		}

		if(Input.GetKeyDown(KeyCode.R)){
			resetNumber();
			for(int i = 0; i < 4; i++){
				slotParent[i].GetComponent<SlotParent>().StartChild();

			}
		}


	}

	void resetNumber(){
		slotNumber = 0;
		score = 0;
		answerText.text = "0";

		int[] rowNumber = new int[4];
		int random;

		for(int i = 0; i < 4; i++){
			while(true){
				random = Random.Range(0, 13);
				if(i >= 1){
					for(int j = 1; j < i; j++){
						if(random == rowNumber[j]){
							continue;
						}
					}
					break;
				}else{
					break;
				}

			}
					
			rowNumber[i] = random;
			SlotParent scripts = slotParent[i].GetComponent<SlotParent>();
			scripts.target = scripts.childs[random];
			mentorNames[i].text = scripts.childs[random].gameObject.GetComponent<SpriteRenderer>().name;
		}


	}

	void Result(){
		for(int i = 0; i < 4; i++){
			if(25 - slotParent[i].GetComponent<SlotParent>().distance > 0){
				score += (25 - slotParent[i].GetComponent<SlotParent>().distance);
			}else{
				score += 0;
			}
		}
		Debug.Log("score = " + score);
		answerText.text = score.ToString();
	}
}
