#include <Sparki.h>
void setup() {
  

}

void loop() {
int x;
  for (int x = 0; x < 11; x++)
    {
      sparki.clearLCD();
      sparki.println("\n");
      sparki.println(x*x);
      sparki.updateLCD();
      delay(500);
    }

}
