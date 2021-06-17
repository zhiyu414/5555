#define NOTE_C3 131
#define NOTE_D3 147
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_G3 196
#define NOTE_A3 220
#define NOTE_B3 247
#define NOTE_C4 262

int latchPin = 11;
int clockPin = 12;
int dataPin = 13;

//int thisNote = -1,noteDuration = 0;
//long previousTime = 0,
 //    presentTime = 0,
  //   pauseBetweenNotes = 0;

int buttonPin[8]={2,3,4,5,6,7,8,9};
void setup()
{
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(10, OUTPUT);
  pinMode( buttonPin[0], INPUT_PULLUP);
  pinMode( buttonPin[1], INPUT_PULLUP);
  pinMode( buttonPin[2], INPUT_PULLUP);
  pinMode( buttonPin[3], INPUT_PULLUP);
  pinMode( buttonPin[4], INPUT_PULLUP);
  pinMode( buttonPin[5], INPUT_PULLUP);
  pinMode( buttonPin[6], INPUT_PULLUP);
  pinMode( buttonPin[7], INPUT_PULLUP);
}

//void checkToPlay(){

 /// presentTime = millis();
  //if(presentTime-previousTime>=pauseBetweenNotes){
  //  thisNote+=1;
   // if(thisNote>=8){
   //   thisNote=-1;
   //   pauseBetweenNotes=100;
   //   previousTime=millis();
   // }else{
   //   tone(10,buttonPin[thisNote],noteDuration);
   //   pauseBetweenNotes=noteDuration*1.2;
   //   previousTime = millis();
   // }
 // }
    
//}

byte draw[8][8] = {
  	{1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
   
}; 
byte scan1[8][8] = {
  	{1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1},
    };
//byte scan2[8] = {
    //   B11111111,
    //   B11111111,
     //  B11111111,
     //  B11111111,
     //  B11111111,
      // B11111111,
      // B10111111,
     //  B11111111  };


void loop()
{
  buttonPin[0]=digitalRead(2);
  buttonPin[1]=digitalRead(3);
  buttonPin[2]=digitalRead(4);
  buttonPin[3]=digitalRead(5);
  buttonPin[4]=digitalRead(6);
  buttonPin[5]=digitalRead(7);
  buttonPin[6]=digitalRead(8);
  buttonPin[7]=digitalRead(9);
  int i=0;
  if(buttonPin[0] == LOW){
    tone(10,NOTE_C3,100  );
    delay(100 );
    noTone(10);
    i++;
  }
   else if(buttonPin[1] == LOW){
    tone(10,NOTE_D3,100  );
    delay(100  );
    noTone(10);
  }
   else if(buttonPin[2] == LOW){
    tone(10,NOTE_E3,100  );
    delay( 100 );
    noTone(10);
  }
   else if(buttonPin[3] == LOW){
    tone(10,NOTE_F3, 100 );
    delay(100  );
    noTone(10);
  }
   else if(buttonPin[4] == LOW){
    tone(10,NOTE_G3, 100 );
    delay(100  );
    noTone(10);
  }
   else if(buttonPin[5] == LOW){
    tone(10,NOTE_A3,100  );
    delay( 100 );
    noTone(10);
  }
   else if(buttonPin[6] == LOW){
    tone(10,NOTE_B3,100  );
    delay( 100 );
    noTone(10);
  }
   else if(buttonPin[7] == LOW){
    tone(10,NOTE_C4,100  );
    delay( 100 );
    noTone(10);
  }
     
  int j=0;
  for( i = 1; i < 8 ; i++){
    
     if(i=1)
    {
       scan1[0][8];
       if(buttonPin[0]==LOW) draw[0][0];
       else if(buttonPin[1]==LOW) draw[0][1];
          else if(buttonPin[2]==LOW) draw[0][2];
          else if(buttonPin[3]==LOW) draw[0][3];
          else if(buttonPin[4]==LOW) draw[0][4];
          else if(buttonPin[5]==LOW) draw[0][5];
          else if(buttonPin[6]==LOW) draw[0][6];
          else if(buttonPin[7]==LOW) draw[0][7];
      i=8;
    }
    //if(i=2)
    //{
     //  scan2[8];
     //  if(buttonPin[2]==LOW) draw[2];
      //i=8;
    //}
  }
   

 
    for(int i = 0; i < 8 ; i++)
    {
      for(int x=0;x<8;x++){
      digitalWrite(latchPin,LOW);
      shiftOut(dataPin, clockPin, MSBFIRST, scan1[i][j]);
      shiftOut(dataPin, clockPin, MSBFIRST,draw[i][j] );
      digitalWrite(latchPin,HIGH);
      //checkToPlay();
      delay(1);
      }
    }
  

   
  
  //delay(2);
  
  
}










