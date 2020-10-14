  
// Arduino Led_Hz
  int led = 9 ;
  

void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
     
  
  for(int i = 20 ; i>0;i--)
  {
    for(int j = 0 ; j<=60 ; j++)
    {
      digitalWrite(led,HIGH);
      delay(i);
      digitalWrite(led,LOW);
      delay(i);
    }
      Serial.println(i);
  }
