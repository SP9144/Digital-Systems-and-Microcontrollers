ddint now,then;
int flag=0,wait=10000;
int inpin=3,outpin=10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(inpin,INPUT);
  pinMode(outpin,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(inpin),click,RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(flag==1){
    
    if(digitalRead(inpin)==HIGH) then=now;
    
    now=millis();
    digitalWrite(outpin,HIGH);
    
    if(now-then>wait){
      digitalWrite(outpin,LOW);
      flag=0;
    }
    
  }
}

void click(){
  then=millis();
  flag=1;  
}
