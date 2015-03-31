#include "HX711.h"


HX711 scale(A1, A0);          // parameter "gain" is ommited; the default value 128 is used by the library
const int buttonPin = 2;      // the number of the pushbutton pin
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  Serial.begin(38400);
  Serial.println("Thrust Sensor Initialized");
  Serial.println("Output in form milliseconds since init, calibrated force in grams");
  scale.set_scale(83.f);
  scale.tare();
}

void loop() {
  if (buttonState == LOW && digitalRead(buttonPin) == HIGH) {
      Serial.println("Tare to 0.");
      buttonState = HIGH;
      scale.tare();	
  }
  else {
      buttonState = LOW;
  }
  
  Serial.print(millis());
  Serial.print(",");
  Serial.println(scale.get_units(1), 0);


}
