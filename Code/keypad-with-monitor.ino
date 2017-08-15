#include <Password.h>
#include <LiquidCrystal.h>
#include <Keypad.h>
#include <Servo.h>

Servo myservo;

//constants for LEDs
int greenLED = 22;
int redLED = 23;

const int rs = 13, en = 12, d4 = 10, d5 = 9, d6 = 8, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
Password password = Password( "41556" );
int currentPosition = 0;
const byte ROWS = 4; // Four rows
const byte COLS = 4; // Four columns
// Define the Keymap
char keys[ROWS][COLS] = {
  {
    '1','2','3','A',  }
  ,
  {
    '4','5','6','B',  }
  ,
  {
    '7','8','9','C',  }
  ,
  {
    '*','0','#','D',  }
};
// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte rowPins[ROWS] = {
  47, 46, 45, 44}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {
  51, 50, 49, 48}; //connect to the column pinouts of the keypad

// Create the Keypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  lcd.begin(16, 2);
  Serial.begin(9600);
  keypad.setDebounceTime(50);
  displayCodeEntryScreen();
  keypad.addEventListener(keypadEvent); //add an event listener for this keypad
  myservo.attach(2);
  myservo.write(180);
  //setup and turn off both LEDs
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
}

void displayCodeEntryScreen()
{
  password.reset();
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("Enter Code:");
  lcd.setCursor(0,1);
  keypad.addEventListener(keypadEvent); //add an event listener for this keypad
  //setup and turn off both LEDs
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
}

void loop(){
  keypad.getKey();
}

//take care of some special events
void keypadEvent(KeypadEvent eKey){
  switch (keypad.getState()){
  case PRESSED:
    lcd.print(eKey);
    switch (eKey){
    case '#': 
      checkPassword();
      break;
    case '*': 
         displayCodeEntryScreen(); break;
    default:
      password.append(eKey);
    }
 switch (keypad.getState()){
   case PRESSED:
   switch (eKey){
   case 'D': myservo.write(180); displayCodeEntryScreen();
    }
  }
  }
}

void checkPassword(){
  if (password.evaluate()){
    digitalWrite(greenLED, HIGH);
    lcd.clear();
    delay(30);
    lcd.setCursor(1, 0);
    lcd.print("Access Granted");
    lcd.setCursor(4, 1);
    lcd.print("Welcome");
    unlockdoor();
    delay(2500);
    displayCodeEntryScreen();
  }
  else{
    loop(); {
      redlight();
    }
    lcd.clear();
    delay(10);
    lcd.setCursor(2, 0);
    lcd.print("Acces Denied");
    delay(2500);
    lcd.clear();
    displayCodeEntryScreen();
  }
}

void unlockdoor(){ //controls servo that locks the door
  myservo.write(90);
  digitalWrite(greenLED, HIGH);
  delay(5000);
}

void redlight(){
digitalWrite(redLED, HIGH);
delay(100);
digitalWrite(redLED, LOW);
delay(100);
digitalWrite(redLED, HIGH);
delay(100);
digitalWrite(redLED, LOW);
delay(100);
digitalWrite(redLED, HIGH);
delay(100);
digitalWrite(redLED, LOW);
delay(100);
digitalWrite(redLED, HIGH);
delay(100);
digitalWrite(redLED, LOW);
delay(100);
digitalWrite(redLED, HIGH);
delay(100);
digitalWrite(redLED, LOW);
delay(100);
digitalWrite(redLED, HIGH);
delay(100);
digitalWrite(redLED, LOW);
delay(100);
digitalWrite(redLED, HIGH);
delay(100);
digitalWrite(redLED, LOW);
delay(100);
digitalWrite(redLED, HIGH);
delay(100);
}



