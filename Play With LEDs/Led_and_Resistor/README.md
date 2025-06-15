# LED and Resistor Project

## How the Circuit Works

![image2](image2)

- This is a simple project where we make a little light blink on and off.
- The blue board is called an **Arduino**. It is like a tiny computer.
- The small red round thing is an **LED** (a little light).
- The stripey thing is a **resistor**. It keeps the LED safe by stopping too much electricity.
- The black and red wires connect the Arduino to the LED and resistor so electricity can flow.
- When the Arduino runs the code, it tells the LED when to turn ON and when to turn OFF—so the light blinks!

---

## How the Code Works

```cpp
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
```

**What does this code do?**

- The Arduino tells the LED to turn ON (shine) and waits for 3 seconds.
- Then, the Arduino tells the LED to turn OFF and waits for 3 seconds.
- It keeps repeating this forever, so the light blinks on and off!

---
