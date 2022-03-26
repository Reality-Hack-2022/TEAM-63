using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnakeHead : MonoBehaviour
{
   
    public MoveSnake gameLogic;
    public string CurrentLetter;
    public GameObject CurrentTile;
    
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            // gameLogic.StartGameOver();
        }else{
            CurrentLetter = other.GetComponent<TileLetters>().letterValue;
            gameLogic.DisplayCurrentLetter(CurrentLetter);
            CurrentTile = other.gameObject;
            gameLogic.AppendWordList(other.gameObject);
            //
        }
    }
                            
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
