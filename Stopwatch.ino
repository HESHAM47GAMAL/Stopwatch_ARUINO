/*      library     */
#include <LiquidCrystal_I2C.h>
#define startPIN 2
#define pausePIN 3
#define resetPIN 4
#define buzzerPIN 5
/* global variable  */
int secTimer=0;
int minTimer=0;
int hourTimer=0;
int flag_warning=0;
//start flag
unsigned char previousStart=0 ;
unsigned char currentStart=0 ;
//pause flag
unsigned char previousPause=0 ;
unsigned char currentPause=0 ;
//continue flag
unsigned char previousContinue=0 ;
unsigned char currentContinue=0 ;
//reset flag
unsigned char previousReset=0 ;
unsigned char currentReset=0 ;

unsigned char startFlag = 0;
unsigned char pauseFlag = 0;
long long previousMilis =0;
long long currentMillis = 0;

LiquidCrystal_I2C lcd(0x20,16,2);
void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight(); //turn on back light
  lcd.setBacklight(HIGH);
  lcd.setCursor(4,0);   //Set cursor to character 2 on line 0
  lcd.print("Stopwatch");
  lcd.setCursor(3,1);//move 5 character in row 1
  lcd.print("Press Start");
  Serial.begin(9600);
  pinMode(startPIN,INPUT);
  pinMode(pausePIN,INPUT);
  pinMode(resetPIN,INPUT);
  pinMode(buzzerPIN,OUTPUT);
  
}

void loop() {
  ///condition and co
  //lcd.setCursor(0,6);
  

  previousStart=currentStart;//0  off   /1 on
  currentStart=digitalRead(startPIN);
  if( (currentStart ==1) && (previousStart == 0) )
  {
    startFlag = 1;
    previousMilis = millis();
  }

  while(startFlag)
  {
    
    if((millis()-previousMilis)==1000)
    {
      secTimer++;
      previousMilis =millis();
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(" ");
      lcd.print("min");
      lcd.print(":");
      lcd.print("sec");
      lcd.setCursor(0,1);
      lcd.print(" ");
      lcd.print(" ");
      lcd.print(minTimer);
      lcd.print(" ");
      lcd.print(":");
      lcd.print(secTimer);
     
      noTone(buzzerPIN);     // Stop sound...
      
    }
    if(minTimer!=flag_warning){
      
      tone(buzzerPIN, 50*minTimer);
      flag_warning=minTimer;
    }
    if(secTimer ==60)
    {
      secTimer=0;
      minTimer++;
    }
    

    ////condition for pause 
  previousPause =currentPause;
  currentPause = digitalRead(pausePIN);
  if( (currentPause ==1) && (previousPause == 0))
  {
    startFlag =0 ;
  }
    
  }
  previousReset = currentReset;
  currentReset = digitalRead(resetPIN);
  if( (currentReset ==1) && (previousReset == 0))
  {
    secTimer =0 ;
    minTimer =0;
   // lcd.clear();
    lcd.setCursor(0,1);
    lcd.print(" ");
    lcd.print(" ");
    lcd.print(minTimer);
    lcd.print(" ");
    lcd.print(":");
    lcd.print(secTimer);
    lcd.print(" ");
  }
  
  
}
