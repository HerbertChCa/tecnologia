// C++ code
//
int let=12;
void setup()
{
  pinMode(let, OUTPUT);
}

void loop()
{
  digitalWrite(let, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(let, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}