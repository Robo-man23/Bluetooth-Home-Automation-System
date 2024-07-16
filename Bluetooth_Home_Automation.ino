//RHYTHM SHAH
//using ports 2,Tx,Rx
int relay1 = 2;
int relay2 = 3;
int relay3 = 4;
int relay4 = 5;
int val;
void setup() {
Serial.begin(9600); 
pinMode(relay1,OUTPUT); 
pinMode(relay2,OUTPUT); 
pinMode(relay3,OUTPUT); 
pinMode(relay4,OUTPUT); 

digitalWrite(relay1,HIGH); 
digitalWrite(relay2,HIGH); 
digitalWrite(relay3,HIGH); 
digitalWrite(relay4,HIGH); 
}
void loop() {
//check data serial from bluetooth android App 
while (Serial.available() > 0)
{
val = Serial.read(); 
Serial.println(val); 
}
//Relay is on 
if( val == 66 ) 
{
digitalWrite(relay1,LOW); 
}
//relay is off
else if( val == 65 ) 
{
digitalWrite(relay1,HIGH); 
}
else if( val == 67 ) 
{
digitalWrite(relay2,HIGH); 
}
else if( val == 68 ) 
{
digitalWrite(relay2,LOW); 
}
else if( val == 69 ) 
{
digitalWrite(relay3,HIGH); 
}
else if( val == 70 ) 
{
digitalWrite(relay3,LOW); 
}

else if( val == 71 ) 
{
digitalWrite(relay4,HIGH); 
}
else if( val == 72 ) 
{
digitalWrite(relay4,LOW); 
}
else if( val == 73 ) 
{
digitalWrite(relay1,HIGH); 
digitalWrite(relay2,HIGH); 
digitalWrite(relay3,HIGH); 
digitalWrite(relay4,HIGH); 
}
else if( val == 74 ) 
{
digitalWrite(relay1,LOW); 
digitalWrite(relay2,LOW); 
digitalWrite(relay3,LOW); 
digitalWrite(relay4,LOW); 
}
}
