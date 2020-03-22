int inPin = 4,outPin=13;    // NOT output connected to digital pin 2
int val=0;       // variable to store the read value

void setup() 
{
  // put your setup code here, to run once:
  
  //pinMode(inPin,INPUT);// sets the digital pin 2 as input
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);     // open the serial port at 9600 bps:

}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(Serial.available()){
     val=Serial.parseInt();
  }
  Serial.print(val);//read input pin
  if(val==0)
    {
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(4,LOW);
      digitalWrite(10,HIGH);
      
    }
  else if(val==1)
    {
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(10,HIGH);
    }
  else if(val==2)
    {
      digitalWrite(3,LOW);
      digitalWrite(2,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(10,LOW);
    }
  else if(val==3)
    {
      digitalWrite(3,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(10,LOW);
    }
  
  
 delay(1000);

}
