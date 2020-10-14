int led = 9;
int led1 = 10;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(led1,HIGH);
  delay(250);
  digitalWrite(led1,LOW);
  delay(250);
  ////////////////////////////////
   digitalWrite(led,HIGH);
   digitalWrite(led1,HIGH);
  delay(250);
  digitalWrite(led1,LOW);
  delay(250);
  digitalWrite(led,LOW);


}
