int irsensor = 2;
int sensorvalue =0;
int ledpin =7;

void setup() {
  Serial.begin(9600);
  pinMode(irsensor,INPUT);
  pinMode(ledpin,OUTPUT);

}

void loop() {

  sensorvalue = digitalRead(irsensor); // 0/1

  if(sensorvalue==LOW){
    digitalWrite(ledpin,HIGH);
    Serial.println("Object detected");
  }
  else{
     digitalWrite(ledpin,LOW);
    Serial.println("NO Object");
  }

  delay(300);
  

}
