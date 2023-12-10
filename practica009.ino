// C++ code
//
int controlador = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(13, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(13, LOW);
}
