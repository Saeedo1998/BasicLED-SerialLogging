// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600); // Other baud rates can be used...
  Serial.println("My Sketch has started");

}

// the loop function runs over and over again forever
void loop() {
  TurnOn();
  delay(1000);                       // wait for a second
  TurnOff();
  delay(1000);                       // wait for a second


}


void TurnOn() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("Light turned on");

}

void TurnOff() {
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    Serial.println("Light turned off");

}
