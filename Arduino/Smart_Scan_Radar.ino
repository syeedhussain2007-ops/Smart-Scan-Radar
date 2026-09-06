#include <Servo.h>

Servo radarServo;

const int servoPin = 12;
const int trigPin = 10;
const int echoPin = 11;

void setup() {
  Serial.begin(9600);

  radarServo.attach(servoPin);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  radarServo.write(0);
  delay(500);

  Serial.println("Radar Started");
}

float getDistance() {
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  // Measure echo
  long duration = pulseIn(echoPin, HIGH, 30000);

  // No echo received
  if (duration == 0) {
    return -1;
  }

  // Calculate distance in cm
  float distance = duration * 0.0343 / 2;

  return distance;
}

void loop() {

  // Scan from 0° to 180°
  for (int angle = 0; angle <= 180; angle++) {

    radarServo.write(angle);
    delay(30);

    float distance = getDistance();

    Serial.print(angle);
    Serial.print(",");
    Serial.println(distance);

  }

  // Scan from 180° back to 0°
  for (int angle = 180; angle >= 0; angle--) {

    radarServo.write(angle);
    delay(30);

    float distance = getDistance();

    Serial.print(angle);
    Serial.print(",");
    Serial.println(distance);
  }
}
