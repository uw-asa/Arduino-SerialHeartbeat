void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("PowerOn");
  Serial.print(" : ");
  Serial.print(millis()/1000);
  Serial.println();

 
  delay(2500);  
  
}
