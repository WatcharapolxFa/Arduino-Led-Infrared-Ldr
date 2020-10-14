int led = 3 ;
int fade = 5 ;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
 for(int bringhtness = 0; bringhtness<=25;bringhtness+=fade)
 {
  analogWrite(led,brightness);
  delay(30);
  }
  for(int brightness = 255 ; brightness >=0;brightness -=fade)
  {
  analogWrite(led,brightness);
  delay(30);
  }

}
