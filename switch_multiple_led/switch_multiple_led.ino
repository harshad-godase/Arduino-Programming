#define buttonpin 2 // Switch is connected to pin 2
int count = 0;

int buttonState = 0;
void setup() {
  
  for(int i = 4; i <= 13; i++)
  {
    pinMode(i, OUTPUT); 
    digitalWrite(i, LOW);
  }
  pinMode(buttonpin, INPUT); 
}

void loop() {

  buttonState = digitalRead(buttonpin); // press -> 1(High) 0 -> LOW // Read the button state
  if(buttonState == HIGH)
  {
    
  }
  else
  {
    count++;
  }

  if(count == 1)
  {
    digitalWrite(13, HIGH);
  }
  else if(count == 2)
  {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
  }
  else if(count == 3)
  {
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
  }
  else if(count == 4)
  {
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
  }
  else if(count == 5)
  {
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
  }
  else if(count == 6)
  {
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
  }
  else if(count == 7)
  {
    digitalWrite(8, LOW);
    digitalWrite(7, HIGH);
  }
  else if(count == 8)
  {
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
  }
  else if(count == 9)
  {
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
  }
  else if(count == 10)
  {
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
  }
  else
  {
    digitalWrite(4, LOW);
    count = 0;
  }
}