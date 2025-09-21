#define TRIG 9
#define ECHO 10

int green = 7;
int yellow =6;
int red =5;

void setup() {
  Serial.begin(9600);
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);

}

void loop() {

  long duration;
  float distance;

  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
   digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
   digitalWrite(TRIG,LOW);

   duration = pulseIn(ECHO,HIGH);
   distance = (duration * 0.0343)/2;

   Serial.print("Distance:");
   Serial.print(distance);
   Serial.println("cm");
   delay(500);
  
  if(distance < 100) {
    
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
}

else if(distance >= 100 && distance < 200) {

  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
}

else if(distance >= 200 && distance < 270) {

  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
  delay(200);
  digitalWrite(red,HIGH);
  delay(200);
}

else if(distance >= 270 && distance < 300) {

  digitalWrite(yellow,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
}

else if(distance >= 300) {

  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
}


}
