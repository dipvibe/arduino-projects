// This code will blink an LED on and off every 3 seconds.

// Define the pin where the LED is connected.
// In this example, the LED is connected to pin 7 of the Arduino.
#define LED_1 7

void setup() {
  // The setup function runs once when the Arduino is turned on.

  // Set LED_1 (pin 7) as an output pin so we can turn the LED on or off.
  pinMode(LED_1, OUTPUT);
}

void loop() {
  // The loop function runs over and over, forever.

  // Turn the LED on (send HIGH voltage to pin 7).
  digitalWrite(LED_1, HIGH);

  // Wait for 3 seconds (3000 milliseconds).
  delay(3000);

  // Turn the LED off (send LOW voltage to pin 7).
  digitalWrite(LED_1, LOW);

  // Wait for another 3 seconds.
  delay(3000);
}
