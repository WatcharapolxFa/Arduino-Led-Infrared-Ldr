
void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);

}

void loop() {
  int i ;
for(i=8;i<=12;i++)
{
  digitalWrite(i,HIGH);
  delay(250);
  digitalWrite(i,LOW);
  }
for(i=12;i>=8;i--)
{
  digitalWrite(i,HIGH);
  delay(250);
  digitalWrite(i,LOW);
  }
}
