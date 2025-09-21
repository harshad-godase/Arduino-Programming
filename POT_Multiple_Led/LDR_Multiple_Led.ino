int potpin=A0;

void setup() {
  Serial.begin(9600);

  for(int i=7;i<=11;i++){
    pinMode(i,OUTPUT);
  }

}

void loop() {
  int potvalue = analogRead(potpin);
  Serial.println(potvalue);

  for(int i=7;i<=11;i++){
    digitalWrite(i,LOW);
  }

  if(potvalue<200){

  }
  else if(potvalue >= 200 && potvalue < 400){
    digitalWrite(7,HIGH);
  }
  else if(potvalue >= 400 && potvalue < 600){
    digitalWrite(8,HIGH);
  }
   else if(potvalue >= 600 && potvalue < 800){
    digitalWrite(9,HIGH);
  }
   else if(potvalue >= 800 && potvalue < 1000){
    digitalWrite(10,HIGH);
  }
   else{
    digitalWrite(11,HIGH);
  }
  delay(300);
}
