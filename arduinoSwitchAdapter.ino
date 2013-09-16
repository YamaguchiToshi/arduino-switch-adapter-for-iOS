
#include <BTHID.h>

#define SW 6

USB Usb;
BTD Btd(&Usb);
BTHID bthid(&Btd);

int val = 0;
int old_val = 0;
int state = 0;

void setup() {
  Serial.begin(115200);
  if (Usb.Init() == -1) {
    Serial.print(F("OSC did not start"));
    while(1); //halt
  }
  Serial.print(F("\r\nBluetooth HID"));
  Btd.btdName = "ASA";  // Set device name
}
  
void loop() {
  
  val = digitalRead(SW);

  if( val == HIGH && old_val == LOW ){
    state = 1 - state;
    delay(10);
  }
  old_val = val;
  if( state == 1 ){
    bthid.HID_SendCharacter(0x20);   
    state = 0; 
  }

  Usb.Task();
}
