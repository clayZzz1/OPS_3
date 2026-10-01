# Going Further

## Nice upgrades to try

Once the basic Theremin works, you can make it more interesting or more musical:

- add LEDs that react to distance
- smooth the readings to reduce noise
- use a larger note range
- add a button to switch modes
- experiment with multiple sensors

## Smooth the sensor readings

Sensor values can jump around a little. A simple moving average can make the sound more stable.

```cpp
const int samples = 5;
int total = 0;

for (int i = 0; i < samples; i++) {
  total += measureDistanceCm();
  delay(10);
}

int averageDistance = total / samples;
```

This makes the pitch change more smoothly instead of flickering.

## Add a visual indicator

You can add a row of LEDs and map distance to different light levels. That gives the project a second feedback system besides sound.

## Make it more musical

Instead of one long pitch range, you can choose note ranges:

- close range → high notes
- mid range → medium notes
- far range → low notes

You can also stop the buzzer entirely when the distance is beyond a chosen limit.

## Use the serial monitor

This is helpful when tuning the project:

```cpp
Serial.print("Distance: ");
Serial.print(distance);
Serial.println(" cm");
```

This lets you see exactly what the sensor is reading.

## Challenge ideas

- only play sound when the hand is within a certain range
- use two sensors to control pitch and volume
- add a second buzzer or another output component
- build a small enclosure for the sensor and buzzer

This project is easy to start, but there is a lot of room to build on it.
