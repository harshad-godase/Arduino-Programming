
void setup() {

   pinMode(11,OUTPUT);

}

void loop() {

// Gradually increase brightness(Fade in)

  for(int i=0;i<=255;i++){
    analogWrite(11,i);  // set the led brightness(PWM)
    delay(30);
  }
  for(int i=255;i>=0;i--){
    analogWrite(11,i);
    delay(30);
  }

}
