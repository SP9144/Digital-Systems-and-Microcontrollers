

int count=0;

 void counter()
 {
  count++;
  Serial.println(count);
  
 }
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);
  attachInterrupt(digitalPinToInterrupt(2),counter,FALLING);
}

int speed1=100;
void loop() {
//  while (speed1<=255)
//  {
//  analogWrite(5,speed1);
//  speed1+=50;
//  delay(2000);
//  if(speed1>=255)
//  speed1=100;
// }
//  Serial.println(count);  
}
