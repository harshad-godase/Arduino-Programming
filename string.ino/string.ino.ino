const float values[5]={1.24,58.2,32.1,66.123,1.2345};

void setup() {  

  Serial.begin(9600);   // Initialize Serial communication
}  

void loop() {  
  
  for(int i=0;i<5;i++){
    Serial.println(values[i],2);
    delay(500);
  }
  delay(5000);

  
}  


