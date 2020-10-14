void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(9,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(analogRead(A0));
delay(300);
if(analogRead(A0)<80)
{
  digitalWrite(9,HIGH);  
}
else
{
  digitalWrite(9,LOW);
}
}
