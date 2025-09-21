
#define buttonpin 2

int buttonState = 1;

void setup() {
  for(int i=4;i<14;i++){
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
  }
  pinMode(buttonpin,INPUT);
}

void loop() {
  
int buttonpress=1; 
 buttonState=digitalRead(buttonpin);
  for(int i=4;i<14;i++){
    if(buttonState==HIGH ){
    digitalWrite(i,LOW);
  }else{
    digitalWrite(i,HIGH);
  }

  }
  
  


  
  

  

  
  

}
