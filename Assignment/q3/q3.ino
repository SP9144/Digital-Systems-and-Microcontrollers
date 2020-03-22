int obstacle=5;
int motor=10;
int current=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(obstacle,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(obstacle)==LOW){
    if(current<255){
      current++;
      analogWrite(motor,current);
      delay(100);
    }    

    if(digitalRead(obstacle)==HIGH){
      if(current>0){
        current--;
        analogWrite(motor,current);
        delay(100);
      }
    }
  }
}
