#include <Sparki.h>
void setup() {


}

void loop() {
int x;
x=7;
sparki.clearLCD();
sparki.print(x);
sparki.println(x*10);
sparki.updateLCD();
delay(500);


}
