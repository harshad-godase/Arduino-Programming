void setup() {
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 
  int temp = analogRead(A0); // reading from 0 - 1023 (10-bit)
  float volatge = (temp * 5.0) / 1024; // This will convert the 10-bit number to volatge readings
  float milivolt = volatge * 1000; // This is muliplyed by 1000 to convert in milivolt
  float tempcel = (milivolt - 500) / 10; // For TMP36 sensor.ramge (-40c to 125c)
  float tempfar = (((tempcel * 9) / 5 ) + 32); // Convert tempcel tempfar

  digitalWrite(3, LOW);
  Serial.print("10-bit values (0 - 1023): ");
  Serial.println(temp);

  Serial.print("Voltage :");
  Serial.print(volatge);
  Serial.println("v");

  Serial.print("Milivolt :");
  Serial.print(milivolt);
  Serial.println("mv");

  Serial.print("Celsius :");
  Serial.print(tempcel);
  Serial.println("\xC2\xB0"); // Degree symbol

  Serial.print("Far :");
  Serial.print(tempfar);
  Serial.println("F");

  if(tempcel > 100)
  {
    digitalWrite(3, HIGH);
  }
  else
  {
    digitalWrite(3, LOW);
  }

  delay(1000);

}