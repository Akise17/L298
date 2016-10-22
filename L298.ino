const int IN1=2;
const int IN2=3;
const int ENA=9;

void setup() 
{
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(ENA,OUTPUT);
}

void loop() 
{
  Forward(100);
  delay(1000);
  stops();
  delay(1000);
  Backward(100);
  delay(1000);
  stops();
  delay(1000);
}

void Forward(int motor_speed)
{
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  analogWrite(ENA,motor_speed);
}

void Backward(int motor_speed)
{
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  analogWrite(ENA,motor_speed);
}

void stops()
{
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,HIGH);
}
