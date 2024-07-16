<div align="center">
  <h1>Bluetooth-Home-Automation-System</h1>
  <a href="https://sites.google.com/view/rhythmshah/bluetooth-home-automation?authuser=0"><b>Visit my website</b></a>
</div>


<h2><u><b>Components Required</b></u></h2>
1. Arduino UNO
2. HC-05 Bluetooth Module
3.  5v 4 channel Relay Module
4.  5v Power Supply
5.  Ac appliances with connections of wires to relay module
6.  LED with 330 ohm resistor

<h2><u><b>Working-</b></u></h2>

I have made an android app " HOMEAUTO " that works only with my bluetooth home automatio. Firstly, the HC-05 bluetooth module connected to home automation circuit advertises bluetooth mac address that can be detected by bluetooth module of our mobile phone, and this is one time process only for first time. After successfull pairing to bluetooth module " HOMEAUTO " app can now be ready to work. Click on connect button of HOMEAUTO app to connect to the paired bluetooth module and you are now good to go. If you are connected to bluetooth module than " CONNECTED " message will be display else " DISCONNECTED " message display on the app. Their are 4 devices listed with on and off button for each device and as per click of that button that respective device will be turn on/off using 5v 4channel relay module that is trigerred by Arduino. Their is a disconnect button on the app in case if you want to disconnect that home automation device. You can also work with manual switches even when connected with bluetooth as well as if bluetooth module not working for any reason than their is a option of manual switch that is always open in both cases. This device requires constant 5v 1A power supply for effective working.
