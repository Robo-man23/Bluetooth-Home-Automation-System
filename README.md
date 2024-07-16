<div align="center">
  <h1>Bluetooth-Home-Automation-System</h1>
  <a href="https://sites.google.com/view/rhythmshah/bluetooth-home-automation?authuser=0"><b>Visit my website</b></a>
</div>


## **Components Required :**

1. Arduino UNO
2. HC-05 Bluetooth Module
3.  5v 4 channel Relay Module
4.  5v Power Supply
5.  Ac appliances with connections of wires to relay module
6.  LED with 330 ohm resistor

## **Working-**

I have made an android app " HOMEAUTO " that works only with my bluetooth home automatio. Firstly, the HC-05 bluetooth module connected to home automation circuit advertises bluetooth mac address that can be detected by bluetooth module of our mobile phone, and this is one time process only for first time. After successfull pairing to bluetooth module " HOMEAUTO " app can now be ready to work. Click on connect button of HOMEAUTO app to connect to the paired bluetooth module and you are now good to go. If you are connected to bluetooth module than " CONNECTED " message will be display else " DISCONNECTED " message display on the app. Their are 4 devices listed with on and off button for each device and as per click of that button that respective device will be turn on/off using 5v 4channel relay module that is trigerred by Arduino. Their is a disconnect button on the app in case if you want to disconnect that home automation device. You can also work with manual switches even when connected with bluetooth as well as if bluetooth module not working for any reason than their is a option of manual switch that is always open in both cases. This device requires constant 5v 1A power supply for effective working.





<table align="center">
  <tr>
    <th><h2><b>Pros</b></h2></th>
    <th><h2><b>Cons</b></h2></th>
  </tr>
  <tr>
    <td>Efficient and effective working</td>
    <td>Bluetooth has range of only 10 meters</td>
  </tr>
  <tr>
    <td>User friendly eco system</td>
    <td>Fails to work outside range of 10 meters</td>
  </tr>
  <tr>
    <td>No loading effect even if all four devices are turn on simultaneously</td>
    <td>Can accomodate ac appliances of only 5A max current ratings</td>
  </tr>
  <tr>
    <td>No lagging effect</td>
    <td>No realtime feedback</td>
  </tr>
  <tr>
    <td>Small size circuit & less connections</td>
    <td>Doesnt support of anywhere use this device to turn on/off ac devices</td>
  </tr>
  <tr>
    <td>Can works great for small area and ac appliances with 5A max current ratings</td>
    <td>Only on/off buttons on app and device</td>
  </tr>
  <tr>
    <td>Budget friendly</td>
    <td>No control of fan speed</td>
  </tr>
  <tr>
    <td>Has disconnect button in app to disconnect for not working with bluetooth automation</td>
    <td>No support of multiple bluetooth pairings</td>
  </tr>
  <tr>
    <td>Can work both manual switch as well as Bluetooth automation</td>
  </tr>
</table>
