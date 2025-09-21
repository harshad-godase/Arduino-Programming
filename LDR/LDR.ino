void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrvalue=analogRead(A0);
  Serial.print("LED values:");
  Serial.println(ldrvalue);
  delay(1000);

}
