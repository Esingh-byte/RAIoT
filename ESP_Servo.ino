#include <ESP8266WiFi.h>  // Include the ESP8266 Wi-Fi library
#include <Servo.h>        // Include the Servo library

// Replace with your network credentials
const char* ssid = "SSID_NAME";     // Your Wi-Fi SSID (network name)
const char* password = "SSID_Password"; // Your Wi-Fi password

Servo myServo; // Create a servo object
int servoPin = D5; // GPIO14 (D5 on NodeMCU)

// Servo positions
int connectedAngle = 90;  // Angle when Wi-Fi is connected
int disconnectedAngle = 0; // Angle when Wi-Fi is not connected

void setup() {
  // Start serial communication for debugging
  Serial.begin(115200);
  delay(10);

  // Attach the servo to the specified pin
  myServo.attach(servoPin);
  myServo.write(disconnectedAngle); // Start with the disconnected position

  // Connecting to Wi-Fi
  Serial.println();
  Serial.print("Connecting to WiFi...");
  
  WiFi.begin(ssid, password);  // Start the Wi-Fi connection
  
  // Wait for the connection to establish
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);  // Wait for 1 second
    Serial.print(".");
  }

  // Once connected, print the IP address
  Serial.println("");
  Serial.println("WiFi connected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());  // Print the ESP8266's IP address
}

void loop() {
  // Check Wi-Fi connection status
  if (WiFi.status() == WL_CONNECTED) {
    myServo.write(connectedAngle);  // Move servo to the connected position
  } else {
    myServo.write(disconnectedAngle); // Move servo to the disconnected position
  }

  delay(500); // Optional delay for stable operation
}
