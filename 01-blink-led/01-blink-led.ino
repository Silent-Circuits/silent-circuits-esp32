const int LED_PIN = 23; // GPIO pin connected to the LED

void setup() {
  pinMode(LED_PIN, OUTPUT); // Configure GPIO 23 as an output
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Turn the LED on
  delay(500); // Wait for 0.5 seconds

  digitalWrite(LED_PIN, LOW); // Turn the LED off
  delay(500); // Wait for 0.5 seconds
}
