// Arduino Led_Hz
  int led = 9 ;
  

void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
   digitalWrite(led,HIGH);
   delay(50);
   digitalWrite(led,LOW);
   delay(50);
  }
