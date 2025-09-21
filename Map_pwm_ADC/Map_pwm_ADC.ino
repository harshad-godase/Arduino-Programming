const int potpin=A0; // connected middle pin of pot to A0
const int ledpin =11;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int potvalue= analogRead(potpin); // read values from 0 to 1023
  int ledvalue = map(potvalue,0,1023,0,255);
  analogWrite(ledpin,ledvalue);

  Serial.print("Pot value");
  Serial.print(potvalue);
  Serial.print(" | PWM value");
  Serial.println(ledvalue);

}
