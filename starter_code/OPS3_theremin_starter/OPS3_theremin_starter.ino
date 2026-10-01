// TODO: change the # to the correct pin numbers for your ultrasonic sensor and buzzer
const int trigPin = #;
const int echoPin = #;
const int speakerPin = #;

void setup() {
  Serial.begin(9600);
  // TODO: set up the pins initialized before (trigPin, echoPin, speakerPin) as INPUT or OUTPUT

}

void loop() {
    digitalWrite(trigPin, LOW); //collects data from sensor
	delayMicroseconds(2);

  // TODO: trigger the ultrasonic sensor with a short HIGH pulse (hint: check the first line of loop()!)

  // TODO: read the echo time with pulseIn()

  // TODO: convert the echo time to distance in cm

  // TODO: print the distance to the Serial Monitor

  // TODO: choose a distance range that makes sense for your Theremin

  // TODO: use map() to convert distance to a buzzer frequency

  // TODO: call tone() when the object is close enough

  // TODO: call noTone() when the object is too far away

  // TODO: add a small delay so the readings are stable
}
