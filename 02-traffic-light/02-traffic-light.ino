
const int RED_LED = 23;    // Red LED connected to GPIO 23
const int YELLOW_LED = 22; // Yellow LED connected to GPIO 22
const int GREEN_LED = 21;  // Green LED connected to GPIO 21

void setup() {
  pinMode(RED_LED, OUTPUT);    // Set red LED as output
  pinMode(YELLOW_LED, OUTPUT); // Set yellow LED as output
  pinMode(GREEN_LED, OUTPUT);  // Set green LED as output
}

void loop() {
  // RED LIGHT
  digitalWrite(RED_LED, HIGH); // Turn red LED ON
  delay(5000);                 // Wait 5 seconds

  // RED AND YELLOW LIGHT
  digitalWrite(YELLOW_LED, HIGH); // Turn yellow LED ON
  delay(2000);                    // Wait 2 seconds

  // GREEN LIGHT
  digitalWrite(RED_LED, LOW);     // Turn red LED OFF
  digitalWrite(YELLOW_LED, LOW);  // Turn yellow LED OFF
  digitalWrite(GREEN_LED, HIGH);  // Turn green LED ON
  delay(5000);                   // Wait 5 seconds

  // YELLOW LIGHT
  digitalWrite(GREEN_LED, LOW);   // Turn green LED OFF
  digitalWrite(YELLOW_LED, HIGH); // Turn yellow LED ON
  delay(2000);                    // Wait 2 seconds

  digitalWrite(YELLOW_LED, LOW);  // Turn yellow LED OFF
}
