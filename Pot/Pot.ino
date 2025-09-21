const int potpin = A0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int potvalue=analogRead(potpin); // read the nalog value (0-1023) (0 to 5v)
  Serial.print("Pot values:");
  Serial.println(potvalue);  // Print the value to serial monitor
  delay(500);

}
