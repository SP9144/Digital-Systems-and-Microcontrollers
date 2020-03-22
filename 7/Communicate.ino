#include "SoftwareSerial.h"
SoftwareSerial myserial(5,6);
//
int sent =0;
int a;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myserial.begin(9600);

}

void loop() {
//   put your main code here, to run repeatedly:
//  if(Serial.available()>0)
 // {
  
//   Serial.write("24",2);
//}

if ( Serial.available() > 0  && sent == 0){
  a = Serial.parseInt();
  myserial.write(a);
  //delay(1000);
  a = myserial.read();
  if( a == 2)
  sent=1;
}
if ( Serial.available() > 0  && sent == 1){

int  b=Serial.parseInt();
  myserial.write(b);
  
  Serial.print(a);
//  if(a==1)
//  Serial.print(" got it ");
}
}
