using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TileLetters : MonoBehaviour
{
    private string[] Alphabet1;
    private string[] Alphabet2;
    private string[] Alphabet3;
    private string[] Alphabet4;
    //
    public string letterValue;
    public TextMeshPro letterText;
    
    // Start is called before the first frame update
    void Start()
    {
        Alphabet1 = new string[8] {"E","T","A","O","I","N","S","R"};
        Alphabet2 = new string[5] {"H","D","L","U","C"};
        Alphabet3 = new string[8] {"M","F","Y","W","G","P","B","V"};
        Alphabet4 = new string[5] {"K","X","Q","J","Z"};
        //1% - "KXQJZ" 14% - "MFYWGPBV" 25% - "HDLUC" 60% - "ETAOINSR"
        SelecttRandomLetter();
    }
    
    
    public void SelecttRandomLetter(){
        float randomNumber = Random.Range(0f,100f);
        if (randomNumber>40){
            letterValue = Alphabet1[Random.Range(0, Alphabet1.Length)];
        }else{
            letterValue = Alphabet2[Random.Range(0, Alphabet2.Length)];
            if (randomNumber<15){
                letterValue = Alphabet3[Random.Range(0, Alphabet3.Length)];
            }
            if (randomNumber<2){
                letterValue = Alphabet4[Random.Range(0, Alphabet4.Length)];
            }
        }
        letterText.text = letterValue;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
