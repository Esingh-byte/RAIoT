// Define IR Sensor Pins
#define LEFT_IR A0    // Left IR sensor on analog pin A0
#define FRONT_IR A1   // Front IR sensor on analog pin A1
#define RIGHT_IR A2   // Right IR sensor on analog pin A2

void setup() {
  Serial.begin(9600); // Start serial communication
}

void loop() {
  // Read sensor values
  int leftValue = analogRead(LEFT_IR);
  int frontValue = analogRead(FRONT_IR);
  int rightValue = analogRead(RIGHT_IR);

  // Print values to Serial Monitor
  Serial.print("Left: ");
  Serial.print(leftValue);
  Serial.print(" | Front: ");
  Serial.print(frontValue);
  Serial.print(" | Right: ");
  Serial.println(rightValue);

  delay(200); // Short delay to avoid flooding the Serial Monitor
}
