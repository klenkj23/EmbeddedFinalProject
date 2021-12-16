
#define RS 2
#define EN 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7

#include <LiquidCrystal.h> //This librarey is insatlled by default along with IDE
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7); //Let the librarey know how we have connected the LCD

void setup() {
 lcd.begin(16, 2); //We are using a 16*2 LCD display
  lcd.setCursor (0,0); //Place the cursor at 1st row 1st column 
}

void loop() {
 //int temp = analogRead(A7);

 //this block outputs temp
 lcd.print("working");
 //lcd.setCursor(9,0);
 //lcd.print(temp);
 
 delay(500);
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.clear();
  
}
