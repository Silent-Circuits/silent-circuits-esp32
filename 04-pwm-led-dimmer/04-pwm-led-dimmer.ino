
const int LED_PIN = 23; // LED connected to GPIO 23

void setup() {
  // Set up PWM: 5000 Hz, 8-bit resolution
  ledcAttach(LED_PIN, 5000, 8);
}

void loop() {
  // Gradually increase LED brightness
  for (int brightness = 0; brightness <= 255; brightness++) {
    ledcWrite(LED_PIN, brightness); // Set LED brightness
    delay(10);                     // Wait 10 milliseconds
  }

  // Gradually decrease LED brightness
  for (int brightness = 255; brightness >= 0; brightness--) {
    ledcWrite(LED_PIN, brightness); // Set LED brightness
    delay(10);                     // Wait 10 milliseconds
  }
}
