/*

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

*/

int led1 = 3;
int led2 = 5;
int led3 = 6;
int led4 = 9;
int led5 = 10;
int delay_time = 500;

// the setup routine runs once when you press reset:
void setup() {
  // declare pin x to be an output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  analogWrite(led1, 32);
  delay(delay_time);
  analogWrite(led2, 32);
  delay(delay_time);
  analogWrite(led3, 32);
  delay(delay_time);
  analogWrite(led4, 32);
  delay(delay_time);
  analogWrite(led5, 32);
  // all leds on now
  delay(delay_time * 10); // wait 5 seconds
  // start turning off the leds in reverse order
  analogWrite(led5, LOW);
  delay(delay_time);
  analogWrite(led4, LOW);
  delay(delay_time);
  analogWrite(led3, LOW);
  delay(delay_time);
  analogWrite(led2, LOW);
  delay(delay_time);
  analogWrite(led1, LOW);
  delay(delay_time * 2);
}
