
void setup() {
pinMode(A0,INPUT);
Serial.begin(9600);
}
void loop() {
  int Temp = analogRead(A0);
  Serial.println(Temp);
}
