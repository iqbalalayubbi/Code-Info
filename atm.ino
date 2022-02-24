#include <Keypad.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {5, 4, 3, 2}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad and LCD
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
LiquidCrystal_I2C lcd(0x27,20,4);

// make variabel
String pin;
String myPin = "123456";
String menu[5] = {"home","tarik","cek","top up","password","nominal",};
String menuNow = "home";
void setup(){
  Serial.begin(9600);
  
  lcd.init();                 
  lcd.backlight();

  // main menu 
  lcd.setCursor(0,0);
  lcd.print("1.Tarik");
  lcd.setCursor(0,1);
  lcd.print("2.Cek");
  lcd.setCursor(9,0);
  lcd.print("3.Top up");
  
}

void inputPassword(){
  lcd.print(0,0);
  lcd.print("Masukkan Password");
}

void loop(){
  char key = customKeypad.getKey();

  if (key == '1' && menu[0] == "home"){
    
  }

  
}
