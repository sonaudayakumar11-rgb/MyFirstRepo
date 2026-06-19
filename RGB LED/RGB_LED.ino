#define R 11
#define B 10
#define G 9
void setup()
{
  pinMode(R, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(G, OUTPUT);
  
  digitalWrite(R,LOW);
  digitalWrite(B,LOW);
  digitalWrite(G,LOW);
  
}

void loop()
{
  //ONLY RED GLOWING
  digitalWrite(R, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(G, LOW);
  delay(1000);
  
  //ONLY BLUE GLOWING
  digitalWrite(R, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(G, LOW);
  delay(1000);
  
  //ONLY GREEN GLOWING
  digitalWrite(R, LOW);
  digitalWrite(B, LOW);
  digitalWrite(G, HIGH);
  delay(1000);
  
  digitalWrite(R, LOW);
  digitalWrite(B, HIGH);//MIX OF BLUE AND GREEN
  digitalWrite(G, HIGH);
  delay(1000);
  
  digitalWrite(R, HIGH);//WHITE
  digitalWrite(B, HIGH);
  digitalWrite(G, HIGH);
  delay(1000);
  
}
  
  
  