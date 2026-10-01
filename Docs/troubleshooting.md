# Troubleshooting

## The buzzer is silent

Check the following:

- the buzzer is connected to the correct digital pin
- the buzzer ground is connected correctly
- the sensor is wired properly
- your hand is within the range you mapped

## The sensor is giving weird values

Possible causes:

- TRIG and ECHO are swapped
- sensor power or ground is not connected properly
- the object is too far away or not in front of the sensor
- the sensor is too close to a wall or other surface

## Pitch jumps around too much

This usually means the sensor is noisy or the distance range is too large. Try:

- limiting the valid range
- averaging multiple readings
- adjusting the `map()` values

## Serial output is empty

Make sure:

- `Serial.begin(9600);` is in `setup()`
- the correct serial port is open in Arduino IDE
- the board is connected and recognized by the computer

## The board resets or behaves oddly

Check:

- loose breadboard wires
- bad ground connection
- too much power draw from components
- incorrect pin assignment

## Best debugging tip

Test the sensor first by printing distance values. Then add the buzzer. Then fine-tune the pitch mapping. This keeps the problem easier to isolate.
