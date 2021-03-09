// include the library code:
#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void setup() {
// set up the LCD's number of columns and rows:
lcd.begin(16, 2);
// Print a message to the LCD.
}
void loop() {
// set the cursor to column 0, line 0
// (note: line 0 is the first row, since counting begins with 0):
lcd.setCursor(0, 0);
lcd.print("HELLO SUPER");
lcd.setCursor(0, 1);
lcd.print("AWESOME PERSON:)");
}
