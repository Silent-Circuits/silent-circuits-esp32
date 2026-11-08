# Project 01 · ESP32 Blink LED

An external LED connected to GPIO23 turns on for 500 ms, then off for 500 ms. The cycle repeats once per second.

## Parts

- ESP32 board with GPIO23 exposed
- LED
- 330 Ω resistor
- Breadboard and jumper wires

## Wiring

Disconnect USB power before wiring.

```text
ESP32 GPIO23 ── [330 Ω] ── LED anode (+, long leg)
                           LED cathode (−, short leg) ── ESP32 GND
```

## Upload

1. Open `01-blink-led.ino` in Arduino IDE.
2. Install the **esp32 by Espressif Systems** board package if needed, then select your ESP32 board and USB port.
3. Upload the sketch. The external LED should start blinking.
