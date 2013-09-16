#include <BTHID.h>

#define SW 6  // スイッチを接続するポート

USB Usb;
BTD Btd(&Usb);
BTHID bthid(&Btd);

int val = 0;
int old_val = 0;
int state = 0;

void setup() {
  Serial.begin(115200);
  if (Usb.Init() == -1) {
    Serial.print(F("OSC did not start\n"));
    while(1); //halt
  }
  Serial.print(F("Bluetooth HID\n"));
  Btd.btdName = "Arduino Switch Adapter";
}
  
void loop() {
  
  val = digitalRead(SW);

  if( val == HIGH && old_val == LOW ){
    state = 1 - state;
    delay(10);
  }

  old_val = val;
  if( state == 1 ){
    bthid.HID_SendCharacter(0x20);  // "Space" のキーコードを送信する
    state = 0; 
  }

  Usb.Task();
}