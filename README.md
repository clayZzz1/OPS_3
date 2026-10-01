# OPS 3: Ultrasonic Theremin

TXST IEEE Student Branch, OPS Project #3.

Third project in the OPS series. You'll use an HC-SR04 ultrasonic distance sensor to control the pitch of a buzzer with your hand, creating a theremin-like instrument that reacts to distance. This project introduces the Arduino to real-world sensing, timing, and sound generation.

Board: **Arduino Nano**. Pin numbers, diagrams, and code here are written for it.

Coming from [OPS2](https://github.com/IEEE-TXST/OPS_2)? You already know digital output, `if` statements, and basic wiring. This time the main new ideas are reading a sensor with `pulseIn()`, using timing functions like `delayMicroseconds()`, and mapping one range of values into another with `map()`.

## Session Goals

By the end of today, students will:

- Improve their understanding of ultrasonic distance sensing
- Improve their programming skills with timing and conversion logic
- Improve their wiring skills on a breadboard
- Build a working theremin-like demo with an Arduino

## Where to look

| I want to... | Go here |
|---|---|
| Understand the parts and the sensor theory | [`Docs/01-parts-and-theory.md`](Docs/01-parts-and-theory.md) |
| Understand the Arduino code and timing | [`Docs/02-coding-basics.md`](Docs/02-coding-basics.md) |
| Actually wire it up and write the program | [`Docs/03-build-the-circuit.md`](Docs/03-build-the-circuit.md) |
| Try the harder version or add enhancements | [`Docs/04-going-further.md`](Docs/04-going-further.md) |
| Fix something that isn't working | [`Docs/troubleshooting.md`](Docs/troubleshooting.md) |

You don't have to read all of this front to back. If you are comfortable with the basics already, jump straight to building.

## Parts list

- 1 Arduino Nano
- 1 breadboard
- 1 HC-SR04 ultrasonic distance sensor
- 1 passive buzzer or piezo speaker
- Jumper wires
- USB cable
- Optional: extra LEDs or other outputs for a visual effect

## Code

- [`starter_code/OPS3_theremin_starter/`](starter_code/OPS3_theremin_starter/): open this first. It has `TODO`s instead of finished code, and the docs walk you through them.
- [`solution_code/OPS3_theremin_solution/`](solution_code/OPS3_theremin_solution/): the finished version, for when you're stuck or want to compare your code.

Both are Arduino IDE sketch folders, so open the folder itself, not just the `.ino` inside.

## Wiring, at a glance

| Part | Pin |
|---|---|
| HC-SR04 TRIG | D9 |
| HC-SR04 ECHO | D10 |
| Buzzer positive lead | D8 |
| HC-SR04 VCC | 5V |
| HC-SR04 GND | GND |
| Buzzer negative lead | GND |

The HC-SR04 sends an ultrasonic pulse and then measures how long it takes for the echo to return. The Arduino converts that time to distance and maps it to a buzzer frequency. The result is a theremin-like sound that changes as your hand moves in front of the sensor.
