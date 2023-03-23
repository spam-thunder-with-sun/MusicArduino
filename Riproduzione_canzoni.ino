#include <LiquidCrystal.h>

// Initialize the library with the pins we're using.
// (Note that you can use different pins if needed.)
// See http://arduino.cc/en/Reference/LiquidCrystal
// for more information:

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int buzzer = 10;    // connect the buzzer to pin 10
const int buttonPin = 8;  
int buttonState;
//const int DelayMusic = 2500;

#define NOTE_C4  262   //Defining note frequency
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_G5  784
#define NOTE_A5  880
#define NOTE_B5 988

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2); //Initialize the 16x2 LCD
  lcd.clear();  //Clear any old data displayed on the LCD
  pinMode(buzzer, OUTPUT);
  pinMode(buttonPin, INPUT);
}

//***********************************************************************************************************************

void loop() {
  for(int i=1; i<4; i++)
  {
   lcd.clear();  //Clear any old data displayed on the LCD
   lcd.setCursor(0, 0);  //Set the (invisible) cursor
   lcd.print("Premi pulsante");
   lcd.setCursor(0, 1);  //Set the (invisible) cursor
   lcd.print("per riprodurre !");
   
   do{//Resto in attesa finchè non viene premuto il pulsante
    buttonState = digitalRead(buttonPin);
   }while(buttonState);

   lcd.clear();  //Clear any old data displayed on the LCD
   switch(i)
   {
    case 1:
      PiratiDeiCaraibi();
      break;
    case 2:
      PerElisa();
      break;
    case 3:
      MarioBros();
      break;
    }
   }

   //delay(DelayMusic);
}

//***********************************************************************************************************************
void PerElisa()
{
  lcd.setCursor(0, 0);  //Set the (invisible) cursor
  lcd.print("In riproduzione: ");
  lcd.setCursor(0, 1);  //Set the (invisible) cursor
  lcd.print("Per Elisa");
  
  delay(600);
  tone(10, 329.63, 300);
  delay(350);
  // play d4# 
  tone(10, 311.13, 300);
  delay(350);
  // play e4
  tone( 10, 329.63, 300);
  delay(350);
  // play d4# 
  tone( 10,311.13, 300);
  delay(350);
  // play e4
  tone(10, 329.63, 300);
  delay(350);
  // play b3
  tone( 10, 246.94, 300);
  delay(400);
  // play d4
  tone(10, 293.66,300);
  delay(400);
  // play c4
  tone(10, 261.63,300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  // play d3
  tone(10,146.83, 300);
  delay(350);
  //play f3
  tone(10, 174.61, 300);
  delay(400);
  //play a3
  tone(10, 220, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 900);
  delay(1000);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play a3#
  tone(10, 233.08, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 900);
  delay(1000);
  delay(300);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4#
  tone(10, 311.13, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4#
  tone(10, 311.13, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play d4
  tone(10, 293.66, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  // play d3
  tone(10, 146.83, 300);
  delay(400);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play a3
  tone(10, 220, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 900);
  delay(1000);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  // play b3
  tone(10,246.94, 300);
  delay(400);
   // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play d4
  tone(10, 293.66, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 900);
  delay(1000);
  // play g3
  tone(10, 196, 300);
  delay(400);
  // play f4
  tone(10, 349.23, 300);
  delay(400);
  //play e4
  tone(10, 329.23, 300);
  delay(400);
  // play d4
  tone(10, 293.63, 900);
  delay(1000);
  // play e3
  tone(10,164.81, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4
  tone(10, 293.63, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 900);
  delay(1000);
  // play d3
  tone(10, 146.83, 300);
  delay(400);
    // play d4
  tone(10, 293.63, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 900);
  delay(1000);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4# 
  tone(10, 311.13, 300);
  delay(350);
  // play e4
  tone( 10, 329.63, 300);
  delay(350);
  // play d4# 
  tone( 10,311.13, 300);
  delay(350);
  // play e4
  tone(10, 329.63, 300);
  delay(350);
  // play b3
  tone( 10, 246.94, 300);
  delay(400);
  // play d4
  tone(10, 293.66,300);
  delay(400);
  // play c4
  tone(10, 261.63,300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  // play d3
  tone(10,146.83, 300);
  delay(350);
  //play f3
  tone(10, 174.61, 300);
  delay(400);
  //play a3
  tone(10, 220, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 900);
  delay(1000);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play a3
  tone(10, 233.08, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 900);
  delay(1000);
  delay(300);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4#
  tone(10, 311.13, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4#
  tone(10, 311.13, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play d4
  tone(10, 293.66, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  // play d3
  tone(10, 146.83, 300);
  delay(400);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play a3
  tone(10, 220, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 900);
  delay(1000);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  }

  void MarioBros()
  {
  lcd.setCursor(0, 0);  //Set the (invisible) cursor
  lcd.print("In riproduzione: ");
  lcd.setCursor(0, 1);  //Set the (invisible) cursor
  lcd.print("Mario Bros");
tone(buzzer, 660 ,100);  
delay ( 150);  
tone(buzzer, 660 ,100);  
delay ( 300);  
tone(buzzer, 660 ,100);  
delay ( 300);  
tone(buzzer, 510 ,100);  
delay ( 100);  
tone(buzzer, 660 ,100);  
delay ( 300);  
tone(buzzer, 770 ,100);  
delay ( 550);  
tone(buzzer, 380 ,100);  
delay ( 575);  
  
tone(buzzer, 510 ,100);  
delay ( 450);  
tone(buzzer, 380 ,100);  
delay ( 400);  
tone(buzzer, 320 ,100);  
delay ( 500);  
tone(buzzer, 440 ,100);  
delay ( 300);  
tone(buzzer, 480 ,80);  
delay ( 330);  
tone(buzzer, 450 ,100);  
delay ( 150);  
tone(buzzer, 430 ,100);  
delay ( 300);  
tone(buzzer, 380 ,100);  
delay ( 200);  
tone(buzzer, 660 ,80);  
delay ( 200);  
tone(buzzer, 760 ,50);  
delay ( 150);  
tone(buzzer, 860 ,100);  
delay ( 300);  
tone(buzzer, 700 ,80);  
delay ( 150);  
tone(buzzer, 760 ,50);  
delay ( 350);  
tone(buzzer, 660 ,80);  
delay ( 300);  
tone(buzzer, 520 ,80);  
delay ( 150);  
tone(buzzer, 580 ,80);  
delay ( 150);  
tone(buzzer, 480 ,80);  
delay ( 500);  
  
tone(buzzer, 510 ,100);  
delay ( 450);  
tone(buzzer, 380 ,100);  
delay ( 400);  
tone(buzzer, 320 ,100);  
delay ( 500);  
tone(buzzer, 440 ,100);  
delay ( 300);  
tone(buzzer, 480 ,80);  
delay ( 330);  
tone(buzzer, 450 ,100);  
delay ( 150);  
tone(buzzer, 430 ,100);  
delay ( 300);  
tone(buzzer, 380 ,100);  
delay ( 200);  
tone(buzzer, 660 ,80);  
delay ( 200);  
tone(buzzer, 760 ,50);  
delay ( 150);  
tone(buzzer, 860 ,100);  
delay ( 300);  
tone(buzzer, 700 ,80);  
delay ( 150);  
tone(buzzer, 760 ,50);  
delay ( 350);  
tone(buzzer, 660 ,80);  
delay ( 300);  
tone(buzzer, 520 ,80);  
delay ( 150);  
tone(buzzer, 580 ,80);  
delay ( 150);  
tone(buzzer, 480 ,80);  
delay ( 500);  
  
tone(buzzer, 500 ,100);  
delay ( 300);  
  
tone(buzzer, 760 ,100);  
delay ( 100);  
tone(buzzer, 720 ,100);  
delay ( 150);  
tone(buzzer, 680 ,100);  
delay ( 150);  
tone(buzzer, 620 ,150);  
delay ( 300);  
  
tone(buzzer, 650 ,150);  
delay ( 300);  
tone(buzzer, 380 ,100);  
delay ( 150);  
tone(buzzer, 430 ,100);  
delay ( 150);  
  
tone(buzzer, 500 ,100);  
delay ( 300);  
tone(buzzer, 430 ,100);  
delay ( 150);  
tone(buzzer, 500 ,100);  
delay ( 100);  
tone(buzzer, 570 ,100);  
delay ( 220);  
  
tone(buzzer, 500 ,100);  
delay ( 300);  
  
tone(buzzer, 760 ,100);  
delay ( 100);  
tone(buzzer, 720 ,100);  
delay ( 150);  
tone(buzzer, 680 ,100);  
delay ( 150);  
tone(buzzer, 620 ,150);  
delay ( 300);  
  
tone(buzzer, 650 ,200);  
delay ( 300);  
  
tone(buzzer, 1020 ,80);  
delay ( 300);  
tone(buzzer, 1020 ,80);  
delay ( 150);  
tone(buzzer, 1020 ,80);  
delay ( 300);  
  
tone(buzzer, 380 ,100);  
delay ( 300);  
tone(buzzer, 500 ,100);  
delay ( 300);  
  
tone(buzzer, 760 ,100);  
delay ( 100);  
tone(buzzer, 720 ,100);  
delay ( 150);  
tone(buzzer, 680 ,100);  
delay ( 150);  
tone(buzzer, 620 ,150);  
delay ( 300);  
  
tone(buzzer, 650 ,150);  
delay ( 300);  
tone(buzzer, 380 ,100);  
delay ( 150);  
tone(buzzer, 430 ,100);  
delay ( 150);  
  
tone(buzzer, 500 ,100);  
delay ( 300);  
tone(buzzer, 430 ,100);  
delay ( 150);  
tone(buzzer, 500 ,100);  
delay ( 100);  
tone(buzzer, 570 ,100);  
delay ( 420);  
  
tone(buzzer, 585 ,100);  
delay ( 450);  
  
tone(buzzer, 550 ,100);  
delay ( 420);  
  
tone(buzzer, 500 ,100);  
delay ( 360);  
  
tone(buzzer, 380 ,100);  
delay ( 300);  
tone(buzzer, 500 ,100);  
delay ( 300);  
tone(buzzer, 500 ,100);  
delay ( 150);  
tone(buzzer, 500 ,100);  
delay ( 300);  
  
tone(buzzer, 500 ,100);  
delay ( 300);  
  
tone(buzzer, 760 ,100);  
delay ( 100);  
tone(buzzer, 720 ,100);  
delay ( 150);  
tone(buzzer, 680 ,100);  
delay ( 150);  
tone(buzzer, 620 ,150);  
delay ( 300);  
  
tone(buzzer, 650 ,150);  
delay ( 300);  
tone(buzzer, 380 ,100);  
delay ( 150);  
tone(buzzer, 430 ,100);  
delay ( 150);  
  
tone(buzzer, 500 ,100);  
delay ( 300);  
tone(buzzer, 430 ,100);  
delay ( 150);  
tone(buzzer, 500 ,100);  
delay ( 100);  
tone(buzzer, 570 ,100);  
delay ( 220);  
  
tone(buzzer, 500 ,100);  
delay ( 300);  
  
tone(buzzer, 760 ,100);  
delay ( 100);  
tone(buzzer, 720 ,100);  
delay ( 150);  
tone(buzzer, 680 ,100);  
delay ( 150);  
tone(buzzer, 620 ,150);  
delay ( 300);  
  
tone(buzzer, 650 ,200);  
delay ( 300);  
  
tone(buzzer, 1020 ,80);  
delay ( 300);  
tone(buzzer, 1020 ,80);  
delay ( 150);  
tone(buzzer, 1020 ,80);  
delay ( 300);  
  
tone(buzzer, 380 ,100);  
delay ( 300);  
tone(buzzer, 500 ,100);  
delay ( 300);  
  
tone(buzzer, 760 ,100);  
delay ( 100);  
tone(buzzer, 720 ,100);  
delay ( 150);  
tone(buzzer, 680 ,100);  
delay ( 150);  
tone(buzzer, 620 ,150);  
delay ( 300);  
  
tone(buzzer, 650 ,150);  
delay ( 300);  
tone(buzzer, 380 ,100);  
delay ( 150);  
tone(buzzer, 430 ,100);  
delay ( 150);  
  
tone(buzzer, 500 ,100);  
delay ( 300);  
tone(buzzer, 430 ,100);  
delay ( 150);  
tone(buzzer, 500 ,100);  
delay ( 100);  
tone(buzzer, 570 ,100);  
delay ( 420);  
  
tone(buzzer, 585 ,100);  
delay ( 450);  
  
tone(buzzer, 550 ,100);  
delay ( 420);  
  
tone(buzzer, 500 ,100);  
delay ( 360);  
  
tone(buzzer, 380 ,100);  
delay ( 300);  
tone(buzzer, 500 ,100);  
delay ( 300);  
tone(buzzer, 500 ,100);  
delay ( 150);  
tone(buzzer, 500 ,100);  
delay ( 300);  
  
tone(buzzer, 500 ,60);  
delay ( 150);  
tone(buzzer, 500 ,80);  
delay ( 300);  
tone(buzzer, 500 ,60);  
delay ( 350);  
tone(buzzer, 500 ,80);  
delay ( 150);  
tone(buzzer, 580 ,80);  
delay ( 350);  
tone(buzzer, 660 ,80);  
delay ( 150);  
tone(buzzer, 500 ,80);  
delay ( 300);  
tone(buzzer, 430 ,80);  
delay ( 150);  
tone(buzzer, 380 ,80);  
delay ( 600);  
  
tone(buzzer, 500 ,60);  
delay ( 150);  
tone(buzzer, 500 ,80);  
delay ( 300);  
tone(buzzer, 500 ,60);  
delay ( 350);  
tone(buzzer, 500 ,80);  
delay ( 150);  
tone(buzzer, 580 ,80);  
delay ( 150);  
tone(buzzer, 660 ,80);  
delay ( 550);  
  
tone(buzzer, 870 ,80);  
delay ( 325);  
tone(buzzer, 760 ,80);  
delay ( 600);  
  
tone(buzzer, 500 ,60);  
delay ( 150);  
tone(buzzer, 500 ,80);  
delay ( 300);  
tone(buzzer, 500 ,60);  
delay ( 350);  
tone(buzzer, 500 ,80);  
delay ( 150);  
tone(buzzer, 580 ,80);  
delay ( 350);  
tone(buzzer, 660 ,80);  
delay ( 150);  
tone(buzzer, 500 ,80);  
delay ( 300);  
tone(buzzer, 430 ,80);  
delay ( 150);  
tone(buzzer, 380 ,80);  
delay ( 600);  
  
tone(buzzer, 660 ,100);  
delay ( 150);  
tone(buzzer, 660 ,100);  
delay ( 300);  
tone(buzzer, 660 ,100);  
delay ( 300);  
tone(buzzer, 510 ,100);  
delay ( 100);  
tone(buzzer, 660 ,100);  
delay ( 300);  
tone(buzzer, 770 ,100);  
delay ( 550);  
tone(buzzer, 380 ,100);  
delay ( 575); 
}

void PiratiDeiCaraibi()
{
int notes[] = {       //Note of the song, 0 is a rest/pulse
   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
   NOTE_A4, NOTE_G4, NOTE_A4, 0,
   
   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
   NOTE_A4, NOTE_G4, NOTE_A4, 0,
   
   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_C5, NOTE_D5, NOTE_D5, 0, 
   NOTE_D5, NOTE_E5, NOTE_F5, NOTE_F5, 0,
   NOTE_E5, NOTE_D5, NOTE_E5, NOTE_A4, 0,
   
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_D5, NOTE_E5, NOTE_A4, 0, 
   NOTE_A4, NOTE_C5, NOTE_B4, NOTE_B4, 0,
   NOTE_C5, NOTE_A4, NOTE_B4, 0,

   NOTE_A4, NOTE_A4, 
   //Repeat of first part
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
   NOTE_A4, NOTE_G4, NOTE_A4, 0,

   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
   NOTE_A4, NOTE_G4, NOTE_A4, 0,
   
   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_C5, NOTE_D5, NOTE_D5, 0, 
   NOTE_D5, NOTE_E5, NOTE_F5, NOTE_F5, 0,
   NOTE_E5, NOTE_D5, NOTE_E5, NOTE_A4, 0,
   
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_D5, NOTE_E5, NOTE_A4, 0, 
   NOTE_A4, NOTE_C5, NOTE_B4, NOTE_B4, 0,
   NOTE_C5, NOTE_A4, NOTE_B4, 0,
   //End of Repeat

   NOTE_E5, 0, 0, NOTE_F5, 0, 0,
   NOTE_E5, NOTE_E5, 0, NOTE_G5, 0, NOTE_E5, NOTE_D5, 0, 0,
   NOTE_D5, 0, 0, NOTE_C5, 0, 0,
   NOTE_B4, NOTE_C5, 0, NOTE_B4, 0, NOTE_A4,

   NOTE_E5, 0, 0, NOTE_F5, 0, 0,
   NOTE_E5, NOTE_E5, 0, NOTE_G5, 0, NOTE_E5, NOTE_D5, 0, 0,
   NOTE_D5, 0, 0, NOTE_C5, 0, 0,
   NOTE_B4, NOTE_C5, 0, NOTE_B4, 0, NOTE_A4
};

int duration[] = {         //duration of each note (in ms) Quarter Note is set to 250 ms
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 125, 250, 125,

  125, 125, 250, 125, 125, 
  250, 125, 250, 125, 
  125, 125, 250, 125, 125,
  125, 125, 375, 375,

  250, 125,
  //Rpeat of First Part
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 125, 250, 125,

  125, 125, 250, 125, 125, 
  250, 125, 250, 125, 
  125, 125, 250, 125, 125,
  125, 125, 375, 375,
  //End of Repeat
  
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 125, 125, 125, 375,
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 500,

  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 125, 125, 125, 375,
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 500
};
int songspeed = 1.5;

  lcd.setCursor(0, 0);  //Set the (invisible) cursor
  lcd.print("In riproduzione: ");
  lcd.setCursor(0, 1);  //Set the (invisible) cursor
  lcd.print("PiratiDeiCaraibi");

  for (int i=0;i<203;i++){              //203 is the total number of music notes in the song
  int wait = duration[i] * songspeed;
  tone(buzzer,notes[i],wait);          //tone(pin,frequency,duration)
  delay(wait);} 

  }
