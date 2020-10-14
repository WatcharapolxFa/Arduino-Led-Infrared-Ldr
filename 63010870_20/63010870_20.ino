
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);  
pinMode(A0,INPUT);
}

void loop() {
  int Temp = analogRead(A0);
  Serial.println(Temp);
  // put your main code here, to run repeatedly:

}
