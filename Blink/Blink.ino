/*
  Turns an LED on and off repeatedly
  digital pin 13 = LED_BUILTIN
*/

int delay_time = 100;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delay_time);                 // wait for a tenth of a second
  digitalWrite(LED_BUILTIN, LOW);
  delay(delay_time);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(delay_time);
  digitalWrite(LED_BUILTIN, LOW);
  delay(delay_time);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(delay_time);
  digitalWrite(LED_BUILTIN, LOW);
  delay(delay_time * 10);            // wait for a second

}
