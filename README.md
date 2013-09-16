arduino switch adapter for iOS
==============================

## これは何か？

iOSユーザ向けに販売されているスイッチアダプタをArduinoで実現するためのスケッチ．
具体的には以下のようなやつ．

* APPlicator for iPad ( http://www.inclusive.co.uk/switch4apps-p5978 )
 
## ハードウェア

* Arduino UNO ( http://arduino.cc/en/Main/arduinoBoardUno )
* USBホストシールド ( http://www.switch-science.com/catalog/438/ )
* Bluetoothドングル ( http://www.planex.co.jp/product/bluetooth/bt-microedr1x/ )
* 部品 (主に秋月で購入)

## ソフトウェア

* USB Host Shield 2.0 BTHID ( https://github.com/ll0s0ll/USB_Host_Shield_2.0_BTHID )

このソースは上のライブラリのサンプルコードを基にして作ってあります．

## 参考にした情報

* 「iPadと外部スイッチを使った「ささやかな」実験」 ( http://www.geocities.jp/jalpsjp/ipad/ipad.html )
* 「ArduinoUNO+USBHostShield+Bluetoothドングルで、iPadにつながるインプットデバイスを作る」 ( http://bit.ly/1aEPRNY )