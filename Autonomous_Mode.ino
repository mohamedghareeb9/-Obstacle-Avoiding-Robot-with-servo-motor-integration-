#include <Servo.h>

Servo smotor;

// Used Pins to Control Left Motors:
#define left_motorF 13
#define left_motorB 12
#define enable_L 5

// Used Pins to Control Right Motors:
#define right_motorF 11
#define right_motorB 10
#define enable_R 6

#define servoPin 9
#define buzzer 7

// Ultrasonic Pins:
#define trig 4
#define echo 3

// Variables for distance measuring:
int duration, distance, distance_R, distance_L;

void setup() {
  pinMode(left_motorF, OUTPUT);
  pinMode(left_motorB, OUTPUT);
  pinMode(right_motorF, OUTPUT);
  pinMode(right_motorB, OUTPUT);
  pinMode(enable_L, OUTPUT);
  pinMode(enable_R, OUTPUT);

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);

  smotor.attach(servoPin);
}

// Function that Measures the Distance:
int measure() {
  digitalWrite(echo, 0);
  delayMicroseconds(2);
  digitalWrite(trig, 1);
  delayMicroseconds(10);
  digitalWrite(trig, 0);
  duration = pulseIn(echo, HIGH);
  distance = 0.034 * duration / 2;
  return constrain(distance, 1, 300);
  delay(500);
}

// Function that Stops all Motors:
void stop() {
  digitalWrite(left_motorF, 0);
  digitalWrite(left_motorB, 0);
  digitalWrite(right_motorF, 0);
  digitalWrite(right_motorB, 0);
  delay(250);
}

void loop() {
  // Set the Position of the Servo at the middle (angle may differ)
  smotor.write(70);

  // Set the Speed of the Car:
  analogWrite(enable_L, 255);
  analogWrite(enable_R, 255);

  // if there is an obstacle at a distance of 25cm or less
  if (measure() < 25 && measure() != 0) {

    // 1) Stop the Car
    stop();

    // 2) Buzz
    tone(buzzer, 5000);
    delay(1500);
    noTone(buzzer);

    // 3) Record available Distance on the Left
    smotor.write(140);
    delay(1000);
    distance_L = measure();

    // 4) Record available Distance on the Right
    smotor.write(0);
    delay(1000);
    distance_R = measure();

    // 5) Compare the 2 available distances
    if (distance_L < distance_R) { // if there is more space to the right:
      // Turn Right by rotating Left Motors only
      digitalWrite(left_motorF, 1);
      delay(500);
      digitalWrite(left_motorF, 0);
    } else { // if there is more space to the left:
      // Turn Left by rotating Right Motors only
      digitalWrite(right_motorF, 1);
      delay(500);
      digitalWrite(right_motorF, 0);
    }

  } else {
    // if there is no obstacle the car keeps moving forward
    digitalWrite(left_motorF, 1);
    digitalWrite(right_motorF, 1);
  }
}