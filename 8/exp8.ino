
int count=0;


void f() {
  count++;
  //Serial.println(count); 
   
}

void setup() {

  Serial.begin(9600);
  pinMode(2,INPUT);
   attachInterrupt(0,f,RISING);

}
  
  

void loop() {

  Serial.println(count); 
  delay(1000);
 

}
