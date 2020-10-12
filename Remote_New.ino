#include <IRremote.h>
IRsend irsend;

void setup() {
// Initialize the Arduino’s LED on pin-13
for(int i=4; i<=11 ; i++){
pinMode(i,INPUT_PULLUP);
}
pinMode(13, OUTPUT);
Serial.begin(9600);
}
void loop() {
if(digitalRead(5)==LOW){
  for(int i=0; i<4 ;i++){
  irsend.sendRC6(0xC00003,20);
  delay(50);
  Serial.println("Signal1OK");
  }
}
else if(digitalRead(7)==LOW){
for(int i=0; i<4 ;i++){
  irsend.sendRC6(0xC00004,20);
  Serial.println("Signal2OK");
}
}
else if(digitalRead(8)==LOW){
for(int i=0; i<4 ;i++){
  irsend.sendRC6(0xC00005,20);
  delay(50);
  Serial.println("Signal3OK");
}
}
else if(digitalRead(9)==LOW){
for(int i=0; i<4 ;i++){
  irsend.sendRC6(0xC00006,20);
  delay(50);
  Serial.println("Signal4OK");
}
}
else if(digitalRead(10)==LOW){
for(int i=0; i<4 ;i++){
  irsend.sendRC6(0xC00007,20);
  delay(50);
  Serial.println("Signal5OK");
}
}
else if (digitalRead(11)==LOW){
for(int i=0; i<4 ;i++){
  irsend.sendRC6(0xC00008,20);
  delay(50);
  Serial.println("Signal6OK");
  }
 }
}

 
