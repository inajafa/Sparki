#include <Sparki.h>
void setup() {


}

void loop() {
sparki.clearLCD();
sparki.drawRect(5,5,10,10);
sparki.drawRectFilled(5,5,10,10);
sparki.updateLCD();
delay(500);

}
