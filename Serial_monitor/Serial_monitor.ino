int count=0;
void setup() {
 Serial.begin(9600);
}

void loop() {
 Serial.println("Harshad Godase");
 Serial.println(count);
 delay(1000);
 count++;
}
