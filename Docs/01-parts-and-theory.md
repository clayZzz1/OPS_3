# Parts and Theory

## What this project is

This project builds a small ultrasonic theremin. As your hand moves closer to or farther away from an HC-SR04 distance sensor, the buzzer changes pitch.

That makes the Arduino read something from the real world, make a decision based on the reading, and produce a sound response.

## Parts list

- 1 Arduino Nano
- 1 breadboard
- 1 HC-SR04 ultrasonic distance sensor
- 1 piezo buzzer or passive buzzer
- Jumper wires
- USB cable
- Optional: extra LEDs or other output parts

## Why modules matter

A module is a small circuit board that adds a specific function to a project. In this project, the HC-SR04 is a sensor module that measures distance.

Modules are useful because they make complicated electronics easier to use in a simple circuit.

The HC-SR04 has four main pins:

- VCC: power
- GND: ground
- TRIG: sends the ultrasonic pulse
- ECHO: receives the reflected pulse

## How the HC-SR04 works

The sensor uses sound, not light. It sends out a pulse of sound at about 40 kHz. When that sound hits an object, part of it bounces back to the sensor.

The sensor measures how long the echo pulse stays high. That time tells the Arduino how long the sound took to travel out and back.

Using the speed of sound:

Distance = speed of sound × time / 2

The speed of sound in air is about:

- 0.0343 cm/µs

So the Arduino can turn the echo time into a distance measurement in centimeters.

## Why the buzzer changes pitch

A buzzer is a simple output device that can make sound when a signal is applied. The Arduino can send a square wave to the buzzer using `tone()`.

Different frequencies create different pitches.

A basic relationship is:

- closer object → smaller distance → higher pitch
- farther object → larger distance → lower pitch

This makes the buzzer act a bit like a theremin.

## Key electrical ideas

### 1. Voltage and current

The Arduino provides a stable voltage for digital signals. The sensor and buzzer are low-power parts, so they can usually be powered safely from the board and breadboard rails.

### 2. Timing

This project depends heavily on timing. The Arduino has to:

1. Trigger the sensor
2. Wait for the echo
3. Measure the response time
4. Convert time into distance
5. Map distance to a frequency
6. Send the tone to the buzzer

## Important note

The HC-SR04 works best when you use a target that is easy to sense, like a hand, a book, or a cup placed in front of it.

This project is a great example of how an Arduino can read the world and react to it in real time.
