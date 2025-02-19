// The setup function runs once when the board is powered on or reset
void setup() {
  pinMode(10, OUTPUT); // Set digital pin 10 as an output
}

// The loop function runs repeatedly
void loop() {
  digitalWrite(10, HIGH); // Turn the LED on
  delay(1000); // Wait for 1 second
  digitalWrite(10, LOW); // Turn the LED off
  delay(1000); // Wait for 1 second
}
