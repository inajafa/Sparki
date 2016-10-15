#include <Sparki.h>
void setup() {


}

void loop() {
sparki.clearLCD();
sparki.drawChar (0,0, '1');
sparki.drawChar (0,1, '2');
sparki.drawChar (0,2, '3');
sparki.drawChar (0,3, '4');
sparki.drawChar (0,4, '5');
sparki.drawChar (0,5, '6');
sparki.drawChar (0,6, '7');
sparki.drawChar (0,7, '8');
sparki.drawChar (0,8, '9');
sparki.drawChar (0,9, '10');

sparki.updateLCD();
delay(500);

}
