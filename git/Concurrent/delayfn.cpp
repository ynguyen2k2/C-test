#define IN1 12
#define IN2 13



void setup() 
{
  // put your setup code here, to run once:
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}
void loop() 
{ 
  for(int i=0 ; i < 1000; i++){
  digitalWrite(IN1, HIGH);
  delay(1);
  if(i<500) {
     digitalWrite(IN2, HIGH);
  }
  else digitalWrite(IN2, LOW);
  }

  for(int i=0 ; i < 1000; i++){
  digitalWrite(IN1, LOW);
  delay(1);
  if(i<500) {
     digitalWrite(IN2, HIGH);
  }
  else digitalWrite(IN2, LOW);
  }

}