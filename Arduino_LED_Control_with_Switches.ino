int led1=3;
int led2=4;
int led4=5;
int led6=6;
int switch1=8;
int switch2=9;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(switch1,INPUT);
  pinMode(switch2,INPUT);
}
void loop() {
  if(digitalRead(switch1)==HIGH){
    analogWrite(led1,127);
    digitalWrite(led2,HIGH);
  }
  else{
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW); 
  }
  if(digitalRead(switch2)==HIGH){
    analogWrite(led4,127);
    digitalWrite(led6,HIGH);
  }
  else{
   digitalWrite(led4,LOW);
   digitalWrite(led6,LOW); 
  }
    
}
