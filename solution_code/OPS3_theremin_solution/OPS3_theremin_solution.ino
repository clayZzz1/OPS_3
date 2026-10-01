const int trigPin = 9;
const int echoPin = 10;
const int speakerPin = 8;
const float speedOfSound = 0.0343; // cm/us

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(speakerPin, OUTPUT);
}

long getDistanceCm() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 25000);
  if (duration == 0) {
    return 400;
  }

  return duration * speedOfSound / 2;
}

void loop() {
  long distance = getDistanceCm();

  if (distance > 150) {
    noTone(speakerPin);
  } else {
    int mappedFrequency = map(distance, 0, 150, 1200, 200);
    tone(speakerPin, mappedFrequency);
  }

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(50);
}
