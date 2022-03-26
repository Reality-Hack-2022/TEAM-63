using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.IO;
using System.Linq;

public class MoveSnake : MonoBehaviour
{
    public string GameState;
    
    private List<Transform> segments = new List<Transform>();
    private List<GameObject> wordTiles = new List<GameObject>();
    
    public Transform segmentPrefab;
    
    public GameObject SnakeObj;
    public float moveIncrement = 0.035f;
    public float timeDelay = 0.5f;
        
    public Vector2 direction = Vector2.right;
    private Vector2 input;
    public int initialSize = 4;
    
    float time = 0;
    
    public TextMeshPro wordList;
    public string letterWord;
    
    public TextMeshPro scoreDisplay;
    public int currentScore = 0;
        
    private List<string> wordsList; //holds the dictionary
    private string[] wordListArray; //the array the contents of the text file is first loaded to
    private TextAsset textAsset;    //the text asset to be used
    
    public GameObject StatusContainer;
    private bool animateDisplayFlag = false;
    private float animateCounter = 0f;
    
    void Awake()
    {
        textAsset = Resources.Load ("allwords", typeof(TextAsset)) as TextAsset;
        Debug.Log ("Words dictionary is loaded");
        wordListArray = textAsset.text.Split('\n');
        wordsList = wordListArray.ToList();
        Debug.Log ("File is loaded");
    }
    
    // Start is called before the first frame update
    void Start()
    {
        GameState = "TitleScreenWait";
        //ActivateButton();
        Debug.Log ("Activate");
    }
    
    public void DisplayCurrentLetter(string currentLetter){
        if (GameState == "CollectLetters"){
            letterWord += currentLetter;
            wordList.text = letterWord;
        }
    }

    public void ActivateButton(){
        if (GameState == "GameOver"){
            // Scramble
             GameObject[] gos;
            gos = GameObject.FindGameObjectsWithTag("Tile");
            foreach (GameObject go in gos)
            {
                go.GetComponent<TileLetters>().SelecttRandomLetter();
            }
            
            GameState = "TitleScreenWait";
        }
        if (GameState == "CollectLetters"){
        
            if ( wordsList.Contains(letterWord) ){
                // Add Points
                currentScore += letterWord.Length * 100;
                scoreDisplay.text = "SCORE: " + currentScore;
                animateDisplayFlag = true;
                //
                ResetWordList();
                letterWord = "";
                // Green
                for (int i = 0; i < segments.Count; i++) {
                    segments[i].gameObject.GetComponent<SpriteRenderer>().color = new Color(0.45f, 0.68f, 0.45f, 0.6f);
                }
                // Green
                SnakeObj.GetComponent<SpriteRenderer>().color = new Color(0.34f, 0.95f, 0.2f, 0.6f);
                GameState = "MoveSnake";
                
            }else{
                // End Game
                StartGameOver();
            }

        }else{
            if (GameState == "MoveSnake"){
                // Yellow
                GameState = "CollectLetters";
                AppendWordList(SnakeObj.GetComponent<SnakeHead>().CurrentTile);
                DisplayCurrentLetter(SnakeObj.GetComponent<SnakeHead>().CurrentLetter);
                SnakeObj.GetComponent<SpriteRenderer>().color = new Color(0.95f, 0.91f, 0.06f, 0.6f);
            }
        }
        if (GameState == "TitleScreenWait"){
            ResetState();
            letterWord = "";
            wordList.text = letterWord;
            GameState = "MoveSnake";
            // Green
            SnakeObj.GetComponent<SpriteRenderer>().color = new Color(0.34f, 0.95f, 0.2f, 0.6f);
        }

    }
    
    public void MoveUp()
    {
        if (direction.x != 0f)
        {
            input = Vector2.up;
        }
    }
    public void MoveDown()
    {
        if (direction.x != 0f)
        {
            input = Vector2.down;
        }
    }
    public void MoveLeft()
    {
        if (direction.y != 0f)
        {
            input = Vector2.left;
        }
    }
    public void MoveRight()
    {
        if (direction.y != 0f)
        {
            input = Vector2.right;
        }
    }
    
    public void ResetState()
    {
        currentScore = 0;
        scoreDisplay.text = "SCORE: " + currentScore;
                    
        //direction = Vector2.right;

        // Start at 1 to skip destroying the head
        for (int i = 1; i < segments.Count; i++) {
            Destroy(segments[i].gameObject);
        }

        // Clear the list but add back this as the head
        segments.Clear();
        segments.Add(SnakeObj.transform);

        // -1 since the head is already in the list
        for (int i = 0; i < initialSize - 1; i++) {
            Grow();
        }
    }
    
    public void ResetWordList(){
        for (int i = 0; i < wordTiles.Count; i++) {
            wordTiles[i].GetComponent<TileLetters>().SelecttRandomLetter();
        }
        wordTiles.Clear();
        wordTiles = new List<GameObject>();
    }
    
    public void AppendWordList(GameObject tileLetter){
        if (GameState == "CollectLetters"){
            wordTiles.Add(tileLetter);
        }
    }

    public void Grow()
    {
        Transform segment = Instantiate(segmentPrefab);
        segment.transform.parent = GameObject.Find("GridArea").transform;
        segment.localPosition = segments[segments.Count - 1].localPosition;
        segments.Add(segment);
    }
    
    public void StartGameOver(){
        GameState = "GameOver";
    }
    
    private void Update()
    {

        if (GameState=="MoveSnake" || GameState=="CollectLetters"){
            time = time + Time.deltaTime;
            
            if (animateDisplayFlag){
                animateCounter += 0.12f;
                float ScaleFactor;
                if (animateCounter<1){
                    ScaleFactor = 1f + animateCounter;
                }else{
                    ScaleFactor = 1f - animateCounter;
                }
                //
                if (animateCounter>2){
                    animateDisplayFlag = false;
                    animateCounter = 0;
                    ScaleFactor = 1f;
                }
                StatusContainer.transform.localScale = new Vector3(ScaleFactor, ScaleFactor, ScaleFactor);
            }
            
            if (time >= timeDelay) {
                time = 0f;
                // Set the new direction based on the input
                if (input != Vector2.zero) {
                    direction = input;
                }
                
                if (GameState=="CollectLetters"){
                    Grow();
                }
                
                // Set each segment's position to be the same as the one it follows.
                // must do this in reverse order so the position is set to the previous
                // position, otherwise they will all be stacked on top of each other.
                for (int i = segments.Count - 1; i > 0; i--) {
                    segments[i].position = segments[i - 1].position;
                }
                if (GameState == "CollectLetters"){
                    if (letterWord.Length>0){
                        // Yellow
                        for (int j = 0; j < letterWord.Length+1; j++) {
                            segments[j].gameObject.GetComponent<SpriteRenderer>().color = new Color(0.7f, 0.7f, 0.2f, 0.6f);
                        }
                    }
                }
    
                // Move the snake in the direction it is facing
                float x = SnakeObj.transform.localPosition.x + direction.x * moveIncrement;
                float y = SnakeObj.transform.localPosition.y + direction.y * moveIncrement;
                
                // Check Bounds
                if (x < -0.085f*6.5){
                    x = 0.085f*4;
                }
                if (x > 0.085f*4.5){
                    x = -0.085f*6;
                }
                if (y < -0.085f*4.5){
                    y = 0.085f*3;
                }
                if (y > 0.085f*3.5){
                    y = -0.085f*4;
                }
                
                SnakeObj.transform.localPosition = new Vector3(x, y, SnakeObj.transform.localPosition.z);
                //
                
            }
            
        }
    }
}
