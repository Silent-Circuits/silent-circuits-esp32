# Project 04 · ESP32 PWM LED Dimmer

An external LED connected to GPIO23 gradually brightens and dims using PWM. The fade repeats automatically.

## Parts

- ESP32 HW-394 (30-pin, USB-C)
- 1 LED
- 1 resistor (220–330 Ω) for the LED
- Breadboard, jumper wires, and a USB-C data cable

## Wiring

**Disconnect USB power before changing connections.** Identify the pins by the labels on your board.

| ESP32 pin | Connection |
| --- | --- |
| D23 (GPIO 23) | 220–330 Ω resistor → LED anode (+, long leg) |
| GND | LED cathode (−, short leg) |

```text
D23 (GPIO23) ── [220–330 Ω] ── (+) LED (−) ── GND
```

## How it works

`ledcAttach(LED_PIN, 5000, 8)` configures GPIO23 for 5000 Hz PWM with 8-bit resolution. The sketch increases the duty value from 0 to 255, then decreases it from 255 to 0, waiting 10 ms after every step. Each ramp takes about 2.56 seconds; the full cycle takes about 5.12 seconds plus execution overhead.

## Upload

1. Open `04-pwm-led-dimmer.ino` in Arduino IDE.
2. Install **esp32 by Espressif Systems**, version **3.x**, in Boards Manager. The sketch uses the pin-based LEDC API introduced in 3.0; it does not use the older 2.x API.
3. Select **ESP32 Dev Module** and the correct serial port.
4. Upload and check that the LED repeatedly brightens and dims.

The sketch contents are unchanged from the source file `ESP32_PWM_LED_Dimmer.ino`. Its filename matches the lesson folder, following the repository's Arduino sketch convention.

LEDC API reference: [Espressif's migration guide](https://docs.espressif.com/projects/arduino-esp32/en/latest/migration_guides/2.x_to_3.0.html).

Part of [Silent Circuits ESP32](../README.md).
