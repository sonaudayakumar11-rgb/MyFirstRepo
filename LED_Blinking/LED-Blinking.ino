int red=13;
int blue=12;
int r_time=500;
int b_time=500;
void setup()
{
 pinMode(red,OUTPUT);
 pinMode(blue,OUTPUT);
 digitalWrite(red,LOW);
 digitalWrite(blue,LOW);
}

void loop()
{
  for(int a=0;a<=5;a++){
    digitalWrite(red,HIGH);
    delay(r_time);
    digitalWrite(red,LOW);
    delay(r_time);}
  for(int b=0;b<=2;b++){
    digitalWrite(blue,HIGH);
    delay(b_time);
    digitalWrite(blue,LOW);
    delay(b_time);}
}
