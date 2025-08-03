char Reading;

const short left_motorF = 13;
const short left_motorB = 12;
const short right_motorF = 8;
const short right_motorB = 7;
const short left_Enable = 5;
const short right_Enable = 6;

void setup() {
  pinMode(left_motorF, OUTPUT);
  pinMode(left_motorB, OUTPUT);
  pinMode(right_motorF, OUTPUT);
  pinMode(right_motorB, OUTPUT);
  pinMode(left_Enable, OUTPUT);
  pinMode(right_Enable, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(left_Enable, 255);
  analogWrite(right_Enable, 255);

  if (Serial.available()) {
    Reading = Serial.read();
    Serial.println(Reading);

    if (Reading == 'F') {
      digitalWrite(left_motorF, HIGH);
      digitalWrite(right_motorF, HIGH);
    }
    else if (Reading == 'B') {
      digitalWrite(left_motorB, HIGH);
      digitalWrite(right_motorB, HIGH);
    }
    else if (Reading == 'L') {
      digitalWrite(right_motorF, HIGH);
    }
    else if (Reading == 'R') {
      digitalWrite(left_motorF, HIGH);
    }
    else if (Reading == 'S') {
      digitalWrite(left_motorF, LOW);
      digitalWrite(right_motorF, LOW);
      digitalWrite(left_motorB, LOW);
      digitalWrite(right_motorB, LOW);
    }
  }

  delay(100);
}