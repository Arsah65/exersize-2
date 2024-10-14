int l=13;
int b=12;
void setup(){
  pinMode(l,OUTPUT);
  pinMode(b,OUTPUT);
}
void loop(){
  digitalWrite(l,HIGH);
  digitalWrite(b,LOW);
  delay(1000);
  digitalWrite(b,HIGH);
  digitalWrite(l,LOW);
  delay(1000);
}