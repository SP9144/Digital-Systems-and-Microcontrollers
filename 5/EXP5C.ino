#include "Timer.h"
int count = 0;
Timer t;
Timer x;
int pin1=2 , pin2=3 , pin3=5 , pin4=7;
void goup() 
{
  t.stop(pin1);
  t.stop(pin2);
  t.stop(pin3);5
  t.stop(pin4);
  t.oscillate(pin1,500,LOW);
  t.oscillate(pin2,1000,LOW);
  t.oscillate(pin3,2000,LOW);
  t.oscillate(pin4,4000,LOW);  

void godown() 
{
  t.stop(pin1);
  t.stop(pin2);
  t.stop(pin3);
  t.stop(pin4);
  t.oscillate(pin1,500,HIGH);
  t.oscillate(pin2,1000,HIGH);
  t.oscillate(pin3,2000,HIGH);
  t.oscillate(pin4,4000,HIGH);
}
void func() {
  if(count%2) {
      goup();
      
    }
   else {
      godown();
       }
    
}

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);7
  pinMode(pin4,OUTPUT);
  t.every(8000,count++);
  t.every(8000,func,0);
  
  //godown();
 }
void loop() {
t.update();
x.update();

// t.every(4000):

//goup();

 

}

