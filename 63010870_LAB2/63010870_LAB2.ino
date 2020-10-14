#define THERMISIOR A1
#define R0 10000
#define B 3435
#define R1 10000

float T0 = 25 ;
void setup()
{
  T0 = T0 +273.15 ;
  Serial.begin(9600);
}
void loop()
{
  int samples;
  samples = analogRead(THERMMISTOR);
  Serial.print("Analog redding : " );
  Serial.println(samples);
  delay(1000);
  
}
