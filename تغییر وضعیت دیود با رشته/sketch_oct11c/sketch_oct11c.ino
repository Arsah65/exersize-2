int l=13;
void setup() {
  // put your setup code here, to run once:
pinMode(l,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()>0){
 String btc = Serial.readStringUntil('\n');
  if (btc == "on"){
    digitalWrite(l,HIGH);
  } else if (btc == "off"){
    digitalWrite(l,LOW);
  }
    }
}
