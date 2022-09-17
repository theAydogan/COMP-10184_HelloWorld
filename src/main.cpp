#include <Arduino.h>
unsigned long theTime;
unsigned int chipID;
unsigned int flashChipID;

//I, Ahmet Aydogan, 000792453 certify that this material is my original work.No other person's work has been used without due acknowledgement.
void setup() {
  // put your setup code here, to run once:
  
  // start the USB serial monitor port
  Serial.begin(115200);

  Serial.println("\n\nAhmet Aydogan, 000792453");
  chipID = ESP.getChipId();
  flashChipID = ESP.getFlashChipId();
  Serial.print("ChipID: ");
  Serial.print(chipID);
  Serial.print("\nFlashChipID: ");
  Serial.print(flashChipID);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("\nTime: ");
  theTime = millis();

  Serial.println(theTime);
  delay(2000);
}