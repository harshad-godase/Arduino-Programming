
#define led 13

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  
  digitalWrite(led,HIGH);
  delay(1000);
  Serial.println("Soham high");
  digitalWrite(led,LOW);
  delay(1000);
  Serial.println("Soham LOW");
}
