# arduino switch adapter for iOS

## これは何か？
iOSユーザ向けに販売されているスイッチアダプタをArduinoで実現するためのスケッチ．
具体的には以下のようなやつ．

* APPlicator for iPad
(<http://www.inclusive.co.uk/switch4apps-p5978>)

## 何ができるのか？
外部スイッチからの入力に対応したアプリの制御ができます．

* Voice4u(<https://itunes.apple.com/jp/app/voice4u/id339916109>)
* SoundingBoard(<https://itunes.apple.com/jp/app/soundingboard/id390532167>)
* Cause and Effect Sensory Light Box(<https://itunes.apple.com/jp/app/cause-effect-sensory-light/id533976433>)

iPadやiPhoneにキーボードとして認識される．外部（このコードでは６番ポート）に付けたスイッチのon/offでアスキーコード（このコードでは0x20）をiOSデバイスに送る事ができる．	

LightBoxと組み合わせて使うとこんな感じ(<http://instagram.com/p/eFOH-vQDna>)

_iOS7のスイッチコントロールでも使用できることを確認しました（使用例：<http://instagram.com/p/efK1rWQDqV/>）．iOS7のスイッチコントロールは画面中どこでもタップできるので，基本的にはどのアプリでも操作できます．_


## ハードウェア
必要な部品類

* Arduino UNO (<http://arduino.cc/en/Main/arduinoBoardUno>)
* USBホストシールド (<http://www.switch-science.com/catalog/438/>)
* Bluetoothドングル (<http://www.planex.co.jp/product/bluetooth/bt-microedr1x/>)
* 部品 (主に秋月で購入)
 - ブレッドボード (1)
 - ジャンパワイヤ	(数本)
 - 3.5mmモノラルミニプラグ・ジャック (1)
 - 10k抵抗 (1)


## ソフトウェア
普通にArduinoで開発．BluetoothドングルをUSBホストシールドで使用するために以下のライブラリを使用した．	

* USB Host Shield 2.0 BTHID (<https://github.com/ll0s0ll/USB_Host_Shield_2.0_BTHID>)

このソースは上のライブラリのサンプルコードを基にして作ってあります．


## 参考にした情報
「iPadと外部スイッチを使った「ささやかな」実験」
iPadに外部スイッチを付けて肢体不自由のあるユーザが使えるようにするための様々な試み．スイッチに対応したアプリが受付けるキーコードの情報が便利．		
<http://www.geocities.jp/jalpsjp/>

「ArduinoUNO+USBHostShield+Bluetoothドングルで、iPadにつながるインプットデバイスを作る」
このプログラムを書くきっかけ．
<http://bit.ly/1aEPRNY>

「ASCII」
アスキーコード表	
<http://ja.wikipedia.org/wiki/ASCII>