#include <Sparki.h>
#include <stdio.h>

void setup() {


}

void loop() {
sparki.clearLCD();
    for (int x = 0; x < 10; x++){
      for (int y = 0; y < 9; y++){
        
    
        sparki.print("\n");
        sparki.println(x);
        sparki.updateLCD();
        delay(500);
    }
  }
}


