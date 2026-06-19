int red=13;
int blue=12;
int r_time=500;
int b_time=500;
int NUM_R=6;
int NUM_B=3;
String red_msg="RED LED IS BLINKING";
String blue_msg="BLUE LED IS BLINKING";
String I_AM="    I AM ON BLINKING # ";
String Welcome="WELCOME";
String To=" TO MY PROGRAM";
String add;
String redmessage="HOW MANY TIMES YOU WANT TO BLINK RED LED";
String bluemessage="HOW MANY TIMES YOU WANT TO BLINK BLUE LED";

void setup()
{
  Serial.begin(9600);
 pinMode(red,OUTPUT);
 pinMode(blue,OUTPUT);
 digitalWrite(red,LOW);
 digitalWrite(blue,LOW);
 add=Welcome+To;
 Serial.println(add);
}

void loop()
{
  Serial.println(redmessage);
  for (NUM_R=Serial.parseInt();NUM_R==0;NUM_R=Serial.parseInt());
  Serial.println(bluemessage);
  for (NUM_B=Serial.parseInt();NUM_B==0;NUM_B=Serial.parseInt());
  Serial.println(red_msg);
  Serial.println(" ");
  
  for(int a=1;a<=NUM_R;a++){
    Serial.print(I_AM);
    Serial.println(a);
    digitalWrite(red,HIGH);
    delay(r_time);
    digitalWrite(red,LOW);
    delay(r_time);}
  Serial.println(blue_msg);
  Serial.println(" ");
  for(int b=1;b<=NUM_B;b++){
    Serial.print(I_AM);
    Serial.println(b);
    digitalWrite(blue,HIGH);
    delay(b_time);
    digitalWrite(blue,LOW);
    delay(b_time);}
}
  