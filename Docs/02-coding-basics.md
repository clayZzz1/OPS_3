# Coding Basics

## New Arduino ideas in this project

This project introduces a few very important ideas:

- reading real-world input from a sensor
- using timing functions like `delayMicroseconds()`
- reading pulse duration with `pulseIn()`
- converting numbers with `map()`
- generating sound with `tone()`

## `delayMicroseconds()`

This function pauses the program for a very short time, measured in microseconds instead of milliseconds.

It is useful for the HC-SR04 because the sensor needs a short trigger pulse before it measures distance.

Example:

```cpp
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
```

That short pulse tells the sensor to start measuring.

## `pulseIn()`

This function waits for a pin to go HIGH, then measures how long it stays HIGH before it goes LOW.

For the HC-SR04, the ECHO pin stays HIGH while the sound wave is traveling out and back.

Example:

```cpp
long duration = pulseIn(echoPin, HIGH);
```

The value returned is in microseconds.

## Distance calculation

The HC-SR04 uses sound waves, so the Arduino uses the speed of sound formula:

```cpp
float speedOfSound = 0.0343; // cm/us
long distance = duration * speedOfSound / 2;
```

The division by 2 is needed because the sensor measures the full round trip, not just the one-way distance.

## `map()`

The `map()` function changes a number from one range to another.

Example:

```cpp
int mappedFrequency = map(distance, 0, 150, 1200, 200);
```

This means:

- distances from 0 to 150 cm
- mapped to frequencies from 1200 to 200 Hz

This is useful because the buzzer should sound higher when the sensor reads a smaller distance and lower when the distance is larger.

## `tone()` and `noTone()`

The Arduino can generate sound from a digital pin using `tone()`.

```cpp
tone(speakerPin, mappedFrequency);
```

When the measured distance is too large or out of range, you can stop the sound:

```cpp
noTone(speakerPin);
```

## Example program flow

```cpp
setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(speakerPin, OUTPUT);
}

loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  long distance = duration * 0.0343 / 2;

  if (distance < 150) {
    int pitch = map(distance, 0, 150, 1200, 200);
    tone(speakerPin, pitch);
  } else {
    noTone(speakerPin);
  }

  delay(50);
}
```

This is the basic logic behind the Theremin project.
