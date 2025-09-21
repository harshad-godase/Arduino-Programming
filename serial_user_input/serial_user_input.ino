String inputstring ="";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Type something:");

}

void loop() {

  if(Serial.available()>0){
    inputstring=Serial.readString();
    Serial.print("\nYou Typed: ");
    Serial.println(inputstring);
  }

}
  