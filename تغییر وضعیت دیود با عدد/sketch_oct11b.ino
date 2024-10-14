int l=13;
void setup() {
  // put your setup code here, to run once:
pinMode(l,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()>0){
 int btc = Serial.parseInt();
  if (btc== 101 ){
    digitalWrite(l,HIGH);
  } else if (btc == 102){
    digitalWrite(l,LOW);
  }
    }
}
