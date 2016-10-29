#include <Sparki.h>
void setup() {
  

}

void loop() {
int x;
  for (int x = 0; x < 0; x++)
    {
      sparki.clearLCD();
      sparki.println(x*x);
      sparki.updateLCD();
      delay(500);
    }

}
