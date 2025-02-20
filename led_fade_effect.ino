// Define the pin number for the LED
const int ledPin = 9;   // LED connected to PWM pin 9

// Brightness control variables
int brightness = 0;     // Initial brightness (0 = off)
int fadeAmount = 5;     // Step size for fading (increase/decrease)

void setup() {
    pinMode(ledPin, OUTPUT);  // Set LED pin as output
}

void loop() {
    // Set LED brightness (0 = off, 255 = fully bright)
    analogWrite(ledPin, brightness);

    // Change the brightness for the next iteration
    brightness += fadeAmount;

    // Reverse direction when reaching brightness limits (0 or 255)
    if (brightness <= 0 || brightness >= 255) {
        fadeAmount = -fadeAmount;  // Reverse fade direction
    }

    // Pause before updating brightness again
    delay(30);  
}