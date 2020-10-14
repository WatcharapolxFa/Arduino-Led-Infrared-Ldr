void setup() {
pinMode(A0,INPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
Serial.begin(9600);
}
void loop() {
  int Temp = analogRead(A0);
  Serial.println(Temp);
  if(Temp<=50)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
   
     
  }
  else
  {
   digitalWrite(10,HIGH);
    digitalWrite(9,LOW); 
  }
  delay(300);

}
