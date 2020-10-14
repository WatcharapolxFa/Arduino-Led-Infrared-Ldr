
void setup() {
pinMode(A0,INPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
Serial.begin(9600);
}
void loop() {
  int Temp = analogRead(A0);
  Serial.println(Temp);
  if(Temp<550)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    
    
  }
  else if(500<Temp&& Temp<700 )
  {
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
  else if(Temp>750&&Temp<800)
  {
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(11,HIGH);
  }
  else
  {
   digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(11,LOW); 
  }

}
