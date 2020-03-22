int aa,bb,a[4],b[4],ans[4];
char op;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    aa=Serial.parseInt();
    op=Serial.read();
    bb=Serial.parseInt();
    

    converta();
    convertb();

    if(op=='+') add();
    else if(op=='-')subtract();
    else if(op=='&') andd();
    else if(op=='|') orr();
    else if(op=='^') xorr();
    
    show();

    }
}

void add(){
  int c=0,check;
  for(int i=0;i<4;i++){
    check=c+a[i]+b[i];  
    if(check==2 || check==3){
      c=1;
      }
      
    else{
      c=0;
      }
     
      ans[i]=check%2;
    } 
  }

void subtract(){
 
  for(int i=0;i<4;i++){
    if (b[i]==0) b[i]=1;
    else b[i]=0; 
    }
  
  int c=1,check;
  for(int i=0;i<4;i++){
    check=c+b[i];  
    if(check==2 || check==3){
      c=1;
      }
      
    else{
      c=0;
      }
      
      b[i]=check%2;
  
  }
  
  add();
}

void andd(){
  for(int i=0;i<4;i++){
    ans[i]=a[i] & b[i];
    }
  }


void orr(){
  for(int i=0;i<4;i++){
    ans[i]=a[i] | b[i];
    }
  }

void xorr(){
  for(int i=0;i<4;i++){
    ans[i]=a[i] ^ b[i];
     }
  }

void converta(){
  for(int i=0;i<4;i++){
    a[i]=(aa%2);
    aa=aa/2;
    }
  }
  
void convertb(){
  for(int i=0;i<4;i++){
    b[i]=(bb%2);
    bb=bb/2;
    }
  }

  
void show(){
  int c=0,y=1;
  for(int i=0;i<4;i++){
    if(ans[i]==1){
      digitalWrite(3+i,HIGH);
      c=c+y;    
    }
    else 
      digitalWrite(3+i,LOW);
      
    y=y*2;
    }
    Serial.println(c);
 }
