# Project 03 · ESP32 Push Button

Control an external LED with a tactile push button using the ESP32's built-in input pull-up resistor.

**Behavior:** Hold the button to turn the LED on; release it to turn the LED off.

## Parts

- ESP32 HW-394 (30-pin, USB-C)
- 1 LED (any color)
- 1 resistor (220–330 Ω) for the LED
- 1 tactile push button
- Breadboard, jumper wires, and a USB-C data cable

No external resistor is needed for the button because the sketch uses `INPUT_PULLUP`.

## Wiring

**Disconnect USB power before changing connections.** Hold the ESP32 with its component side facing you and the USB-C connector at the bottom. On the right-hand row of header pins, **D23 is the first pin from the top and D22 is the second**.

| ESP32 pin | Connection |
| --- | --- |
| D23 (GPIO 23), right side, 1st from top | 220–330 Ω resistor → LED anode (+, long leg) |
| D22 (GPIO 22), right side, 2nd from top | One side of the push button |
| GND, right side, 2nd from bottom (above 3V3) | LED cathode (−, short leg) and the other side of the button |

```text
D23 (GPIO23) ── [220–330 Ω] ── (+) LED (−) ──┐
                                              ├── GND
D22 (GPIO22) ─────── [ PUSH BUTTON ] ─────────┘
```

**Button orientation:** A common four-leg tactile switch has two pins on each side that are internally connected. Use legs on opposite sides that become connected only while pressed. Check the switch with a multimeter if unsure.

## How it works

`INPUT_PULLUP` keeps GPIO 22 at `HIGH` when the button is released. Pressing the button connects D22 to GND, producing `LOW`. The code turns the LED on only when it reads `LOW`.

## Upload

1. Open `03-push-button.ino` in Arduino IDE.
2. Install **esp32 by Espressif Systems** in Boards Manager if needed.
3. Select **ESP32 Dev Module** and the correct serial port.
4. Upload and test: LED on while pressed, off when released.

## Video tutorial

Watch Lesson 03 on YouTube: https://youtu.be/batVK6AZFpM

Part of [Silent Circuits ESP32](../README.md).
