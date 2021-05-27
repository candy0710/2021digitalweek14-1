int sensorvalue = 0;
int sensorpin= A0;

void setup()
{
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  sensorvalue = analogRead(sensorpin);
  Serial.println(sensorvalue);
  
  digitalWrite(13, HIGH);
  delay(sensorvalue);
  digitalWrite(13, LOW);
  delay(sensorvalue);
  
  delay(1); 
}