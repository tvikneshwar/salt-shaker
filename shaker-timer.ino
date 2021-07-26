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
  delay(9000);   // delay for cover change
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);       
  digitalWrite(relayInput, LOW);    // filling relay time

  delay(8000);  // filling time
}
