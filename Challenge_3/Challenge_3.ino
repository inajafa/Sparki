#include <Sparki.h>
void setup() {


}

void loop() {
/*int x
x >= 10
x +=10; */
for (int x = 0; x < 10; x=x+1);
{ for (int y = 0;, y 9; y=y+1);
{
sparki.clearLCD();
sparki.drawChar (0,y, x); }}


sparki.updateLCD();
delay(500);

}
