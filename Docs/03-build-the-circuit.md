# Build the Circuit

## Recommended connection layout

The exact breadboard layout may differ a little, but this is the standard setup for the project:

| Part | Arduino pin |
|---|---|
| HC-SR04 TRIG | D9 |
| HC-SR04 ECHO | D10 |
| Buzzer positive lead | D8 |
| HC-SR04 VCC | 5V |
| HC-SR04 GND | GND |
| Buzzer negative lead | GND |

## Wiring steps

1. Put the HC-SR04 module on the breadboard.
2. Connect VCC to 5V.
3. Connect GND to GND.
4. Connect TRIG to digital pin D9.
5. Connect ECHO to digital pin D10.
6. Place the buzzer on the breadboard.
7. Connect the buzzer positive lead to D8.
8. Connect the buzzer negative lead to GND.

## What happens in the circuit

- The Arduino sends a short pulse on TRIG.
- The sensor sends out ultrasonic sound.
- The sound bounces back from a nearby object.
- The ECHO pin stays HIGH for the time it takes for the pulse to return.
- `pulseIn()` measures that time.
- The Arduino converts the time into distance and then into pitch.

## Example behavior

Move your hand closer to the sensor and the pitch goes up. Move it farther away and the pitch goes down.

## Build checklist

- power and ground are connected correctly
- trigger and echo wires are not swapped
- buzzer is connected to the correct pin
- Arduino is plugged into the computer
- you're ready to test the code

## Debugging tip

Add `Serial.print()` statements to watch the distance value while testing. If the numbers look wrong or never change, check the sensor wiring first.
