#include <stdlib.h>

int prev_read1;
int prev_read2;
int prev_read3;
int prev_read4;
int prev_read5;
int prev_read6;
int prev_read7;
int prev_read8;
int prev_read9;

void setup() {
  delay(2000);
  Serial.begin(9600); // Enable serial monitor
  pinMode(19, OUTPUT);
  pinMode(13, INPUT);
  pinMode(16, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
  pinMode(0, OUTPUT);
  pinMode(32, INPUT);
  pinMode(21, OUTPUT);
  pinMode(33, INPUT);
  pinMode(18, OUTPUT);
  pinMode(15, INPUT);
  pinMode(22, OUTPUT);
  pinMode(14, INPUT);
  pinMode(3, OUTPUT);
  pinMode(27, INPUT);
  pinMode(17, OUTPUT);
  pinMode(12, INPUT);

  prev_read1 = 0;
  prev_read2 = 0;
  prev_read3 = 0;
  prev_read4 = 0;
  prev_read5 = 0;
  prev_read6 = 0;
  prev_read7 = 0;
  prev_read8 = 0;
  prev_read9 = 0;

  randomSeed(analogRead(0)); // Seed random number generator
}

void loop() {
  int reading1 = analogRead(13);
  int reading2 = analogRead(4);
  int reading3 = analogRead(2);
  int reading4 = analogRead(32);
  int reading5 = analogRead(33);
  int reading6 = analogRead(15);
  int reading7 = analogRead(14);
  int reading8 = analogRead(27);
  int reading9 = analogRead(12);

  checkSensor(reading1, prev_read1, 19, 400);
  checkSensor(reading2, prev_read2, 16, 400);
  checkSensor(reading3, prev_read3, 5, 1500);
  checkSensor(reading4, prev_read4, 0, 400);
  checkSensor(reading5, prev_read5, 21, 400);
  checkSensor(reading6, prev_read6, 18, 800);
  checkSensor(reading7, prev_read7, 22, 400);
  checkSensor(reading8, prev_read8, 3, 1000);
  checkSensor(reading9, prev_read9, 17, 400);

  prev_read1 = reading1;
  prev_read2 = reading2;
  prev_read3 = reading3;
  prev_read4 = reading4;
  prev_read5 = reading5;
  prev_read6 = reading6;
  prev_read7 = reading7;
  prev_read8 = reading8;
  prev_read9 = reading9;

  playGame();

  delay(500);
}

void checkSensor(int reading, int prev_reading, int pin, int threshold) {
  if((prev_reading > reading && (prev_reading - reading) > threshold) || reading == 0){
    digitalWrite(pin, HIGH);
  } else {
    digitalWrite(pin, LOW);
  }
}

void playGame() {
  int ledPins[] = {19, 16, 5, 0, 21, 18, 22, 3, 17};
  int randomIndex = random(0, 9);
  int ledPin = ledPins[randomIndex];

  digitalWrite(ledPin, HIGH);
  delay(1000); // LED stays on for 1 second
  digitalWrite(ledPin, LOW);
}
