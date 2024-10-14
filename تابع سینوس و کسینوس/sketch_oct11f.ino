void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for (float i=0; i<1000;i=i+2)
{
  Serial.print(sin(i*(3.14/180.0)));
  Serial.print("    ");
  Serial.print(cos(i*(3.14/180.0)));
}
}
