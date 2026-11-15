const int LED_PIN = 23;    // LED connected to GPIO 23
const int BUTTON_PIN = 22; // Button connected to GPIO 22

void setup() {
  pinMode(LED_PIN, OUTPUT);         // Set LED pin as output
  pinMode(BUTTON_PIN, INPUT_PULLUP); // Enable internal pull-up resistor
}

void loop() {
  // Read the button state
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {
    // Button is pressed
    digitalWrite(LED_PIN, HIGH); // Turn LED ON
  } else {
    // Button is released
    digitalWrite(LED_PIN, LOW);  // Turn LED OFF
  }
}
