// The setup() function runs once when the Arduino is powered on or reset
void setup() {
  pinMode(13, OUTPUT);  // Set digital pin 13 as an OUTPUT pin (so we can control it)
}

// The loop() function runs again and again forever
void loop() {

  digitalWrite(13, HIGH);  // Turn ON the LED (send 5V to pin 13)
  delay(2000);              // Wait for 2000 milliseconds (2 seconds)

  digitalWrite(13, LOW);   // Turn OFF the LED (send 0V to pin 13)
  delay(500);               // Wait for 500 milliseconds (0.5 seconds)

}
