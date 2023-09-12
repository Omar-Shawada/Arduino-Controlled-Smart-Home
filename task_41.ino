const byte LEDS[] = {13, 12, 11, 10, 9, 8, 7, 6};
const byte NUM_LEDS = sizeof(LEDS) / sizeof(LEDS[0]);
void setup()
{
 
  for (int i = 0; i < NUM_LEDS; i++)
  {
    pinMode(LEDS[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop(){
  char x = Serial.read();
  if (x != -1)
  {
    for (int j = 0; j < NUM_LEDS; j++)
    {
      digitalWrite(LEDS[j], x & (1 << j));
    }
  }
}

/******************
*                 *
* Mode one-----s  *
*                 *
* Mode two-----m  *
*                 *
* Mode three---a  *
*                 *
* Mode four----r  *
*                 *
* Mode five----t  *
*                 *
*                 *
******************/
