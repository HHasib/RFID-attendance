
#include <SoftwareSerial.h>

// Pin 1 | D3
// Pin 2 | D2
SoftwareSerial Rfid = SoftwareSerial(3,2);
void setup() {
  // Serial Monitor to see results on the computer
  Serial.begin(9600);
  // Communication to the RFID reader
  Rfid.begin(9600);
}

void loop() {
  // check, if any data is available
  if(Rfid.available() > 0 ){
    // as long as there is data available...
    while(Rfid.available() > 0 ){
      // read a byte
      int r = Rfid.read();
      // print it to the serial monitor
      Serial.print(r, DEC);


}
  
    // linebreak
    Serial.println();
  }
}
