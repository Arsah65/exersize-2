void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()>0){
float a = Serial.parseFloat();
char  c= Serial.read();
float b= Serial.parseFloat();
switch (c) {
case '+':
Serial.println(a+b);
break;
case '-':
Serial.println(a-b);
break;
case '*':
Serial.println(a*b);
break;
case '/':
Serial.println(a/b);
break;
}
}
}
