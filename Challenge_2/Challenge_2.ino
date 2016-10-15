#include <Sparki.h>
void setup() {
int x;
x=7;

}

void loop() {
sparki.clearLCD();
sparki.print(x);
sparki.println(x*10);
sparki.updateLCD();
delay(500);


}
