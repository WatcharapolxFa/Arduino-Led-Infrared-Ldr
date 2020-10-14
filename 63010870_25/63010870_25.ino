void setup() {
  pinMode(A0, INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int LED = analogRead(A1);
  Serial.println (LED);
  delay(500);
  if(LED>100&&LED<200)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
  else if (LED>200&&LED<300)
  {
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
  else if (LED>300&&LED<400)
  {
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
  else if (LED>400&&LED<500)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
  else if (LED>500&&LED<600)
  {
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
  }
  else if (LED>600&&LED<700)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
  else if (LED>700&&LED<800)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
  }
  else if (LED>800)
  {
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
  // put your main code here, to run repeatedly:

}
