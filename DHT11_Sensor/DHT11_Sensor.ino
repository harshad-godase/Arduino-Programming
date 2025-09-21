#include<DHT.h>

char degree = 176; // degree ascii value is 176

// define DGHT pinn  

#define DHTPIN 2  // connect the dht11 data pin to digital pin 2
#define DHTTYPE DHT11  // define the type of dht sensor

DHT dht(DHTPIN,DHTTYPE); // Initialize DHT object

void setup() {
  Serial.begin(9600);
  dht.begin();

}

void loop() {

    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();

 
    Serial.print("Temperature : ");
    Serial.print(temperature); 
   // Serial.print(degree);
    Serial.print("C \t");
    Serial.print(" | Humidity:");
    Serial.print(humidity);
    Serial.println("%");
    
   

    delay(3000);

}
