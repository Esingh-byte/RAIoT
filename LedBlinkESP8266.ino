// Pin where the LED is connected
const int ledPin = 2; // GPIO2 (D4 on NodeMCU)

void setup() {
  // Set the LED pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn the LED on
  delay(1000);               // Wait for 1 second
  digitalWrite(ledPin, LOW);  // Turn the LED off
  delay(1000);               // Wait for 1 second
}
