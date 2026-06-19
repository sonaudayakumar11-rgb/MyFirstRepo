int sec=0;
int min=0;
int hour=0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for( ; ;sec++)
  {
    delay(1000);
    if(sec==60){
      sec=0;
      min++;}
    if(min==60){
      min=0;
      hour++;}
    Serial.print(hour);
    Serial.print(":");
    Serial.print(min);
    Serial.print(":");
    Serial.print(sec);
    Serial.println(".");}
}