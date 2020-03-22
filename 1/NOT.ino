int inPin = 2;    // NOT output connected to digital pin 2
int val=0;       // variable to store the read value

void setup() 
{
  // put your setup code here, to run once:
  
  pinMode(inPin,INPUT);   // sets the digital pin 2 as input
  Serial.begin(9600);     // open the serial port at 9600 bps:

}

void loop() 
{
  // put your main code here, to run repeatedly:
  
  val = digitalRead(inPin); //read input pin
  if(val==HIGH)
    {
      Serial.print("Hello World!\n");   // prints the label
    }
  else
    {
      Serial.print("0\n");
    }
 

}
