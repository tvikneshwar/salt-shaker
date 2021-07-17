// vikneshwar thandeswaran 17/07/2021 sri bairavi supermarket



int relayInput = D2; // the input to the relay pin



void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(relayInput, OUTPUT); // initialize pin as OUTPUT
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);       // turn the LED on (HIGH is the voltage level)
  digitalWrite(relayInput, HIGH);        // turn relay on   
  delay(2000);                          // wait for a second
  digitalWrite(LED_BUILTIN, LOW);       // turn the LED off by making the voltage LOW
  digitalWrite(relayInput, LOW);      // turn relay off

  delay(7000);                       // wait for a second
}
