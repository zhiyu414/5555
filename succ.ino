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


int buttonState[8]={1};

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



byte scan[8] = {
   B01111111,
   B10111111,
   B11011111,
   B11101111,
   B11110111,
   B11111011,
   B11111101,
   B11111110
}; //掃描
  

byte draw1[8] = {
   B00000001,
   B00000001,
   B00000001,
   B00000001,
   B00000001,
   B00000001,
   B00000001,
   B00000001
}; //圖案

byte draw2[8] = {
   B00000010,
   B00000010,
   B00000010,
   B00000010,
   B00000010,
   B00000010,
   B00000010,
   B00000010
}; //圖案

byte draw3[8] = {
   B00000100,
   B00000100,
   B00000100,
   B00000100,
   B00000100,
   B00000100,
   B00000100,
   B00000100
}; //圖案

byte draw4[8] = {
   B00001000,
   B00001000,
   B00001000,
   B00001000,
   B00001000,
   B00001000,
   B00001000,
   B00001000
}; //圖案

byte draw5[8] = {
   B00010000,
   B00010000,
   B00010000,
   B00010000,
   B00010000,
   B00010000,
   B00010000,
   B00010000
}; //圖案

byte draw6[8] = {
   B00100000,
   B00100000,
   B00100000,
   B00100000,
   B00100000,
   B00100000,
   B00100000,
   B00100000
}; //圖案

byte draw7[8] = {
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000
}; //圖案

byte draw8[8] = {
   B10000000,
   B10000000,
   B10000000,
   B10000000,
   B10000000,
   B10000000,
   B10000000,
   B10000000
}; //圖案





int i=-1;
void loop()
{
  

  
  int j;
  buttonPin[0]=digitalRead(2);
  buttonPin[1]=digitalRead(3);
  buttonPin[2]=digitalRead(4);
  buttonPin[3]=digitalRead(5);
  buttonPin[4]=digitalRead(6);
  buttonPin[5]=digitalRead(7);
  buttonPin[6]=digitalRead(8);
  buttonPin[7]=digitalRead(9);
  
    if(buttonPin[0] == 0){
    i++;
    tone(10,NOTE_C3,100  );
   
    //noTone(10);
    digitalWrite(latchPin,LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, scan[i]);
    shiftOut(dataPin, clockPin, MSBFIRST, draw1[i]);
    digitalWrite(latchPin,HIGH);
    delay(500);
    if(i>=7){i=-1;} buttonState[0]=0;
        
      
  }
   else if(buttonPin[1] == 0){
    i++;
    tone(10,NOTE_D3,100  );
    //noTone(10);
     
    digitalWrite(latchPin,LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, scan[i]);
    shiftOut(dataPin, clockPin, MSBFIRST, draw2[i]);
    digitalWrite(latchPin,HIGH);
    delay(500);
    if(i>=7){i=-1;} buttonState[1]=0;
  }
   else if(buttonPin[2] == 0){
    i++;
    tone(10,NOTE_E3,100  );
  //noTone(10);
    
    digitalWrite(latchPin,LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, scan[i]);
    shiftOut(dataPin, clockPin, MSBFIRST, draw3[i]);
    digitalWrite(latchPin,HIGH);
    delay(500);
    if(i>=7){i=-1;} buttonState[2]=0;
  }
   else if(buttonPin[3] == 0){
    i++;
    tone(10,NOTE_F3, 100 );
   //noTone(10);
    digitalWrite(latchPin,LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, scan[i]);
    shiftOut(dataPin, clockPin, MSBFIRST, draw4[i]);
    digitalWrite(latchPin,HIGH);
    delay(500);
    if(i>=7){i=-1;} buttonState[3]=0;
  }
   else if(buttonPin[4] == 0){
    i++;
    tone(10,NOTE_G3, 100 );
    //noTone(10);
    
    digitalWrite(latchPin,LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, scan[i]);
    shiftOut(dataPin, clockPin, MSBFIRST, draw5[i]);
    digitalWrite(latchPin,HIGH);
    delay(500);
    if(i>=7){i=-1;} buttonState[4]=0;
  }
   else if(buttonPin[5] == 0){
    i++;
    tone(10,NOTE_A3,100  );
   // noTone(10);
    
    
    digitalWrite(latchPin,LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, scan[i]);
    shiftOut(dataPin, clockPin, MSBFIRST, draw6[i]);
    digitalWrite(latchPin,HIGH);
    delay(500);
    if(i>=7){i=-1;} buttonState[5]=0;
  }
   else if(buttonPin[6] == 0){
    i++;
    tone(10,NOTE_B3,100  );
  // noTone(10);
   
    digitalWrite(latchPin,LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, scan[i]);
    shiftOut(dataPin, clockPin, MSBFIRST, draw7[i]);
    digitalWrite(latchPin,HIGH);
    delay(500);
    if(i>=7){i=-1;} buttonState[6]=0;
  }
   else if(buttonPin[7] == 0){
    i++;
    tone(10,NOTE_C4,100  );
    //noTone(10);
    
    digitalWrite(latchPin,LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, scan[i]);
    shiftOut(dataPin, clockPin, MSBFIRST, draw8[i]);
    digitalWrite(latchPin,HIGH);
    delay(500);
    if(i>=7){i=-1;} buttonState[7]=0;
  }

  

       

for(int j = 0; j < 8 ; j++)
{
	if(buttonPin[j]==1&& buttonState[j]==0)
      {
        noTone(10);
        buttonState[j]=1;
       }
    
  }


}




