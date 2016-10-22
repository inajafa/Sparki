#include <Sparki.h>
#include <stdio.h>

void setup() {


}

void loop() {
sparki.clearLCD();
    for (int x = 0; x < 11; x++){
    for (int y = x+1; y < 12; y++){
      
        sparki.println(x);
        sparki.clearLCD();
        sparki.updateLCD();
        sparki.println(y);
        //sparki.println(y);
        //sparki.updateLCD();
        delay(500);
    }
  }
}


