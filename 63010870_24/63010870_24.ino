void setup() {
  pinMode(A0, INPUT);
   Serial.begin(9600);

}

void loop() {
  
  int LED = analogRead(A0);
  Serial.println (LED);
  delay(500);
  // put your main code here, to run repeatedly:

}
