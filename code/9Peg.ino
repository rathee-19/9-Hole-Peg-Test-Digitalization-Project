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

  if(( prev_read1 > reading1 && (prev_read1-reading1) > 400) || reading1 == 0){
    digitalWrite(19, HIGH);
  }
  else{
    digitalWrite(19, LOW);
  }

  if(( prev_read2 > reading2 && (prev_read2-reading2) > 400) || reading2 == 0){
    digitalWrite(16, HIGH);
  }
  else{
    digitalWrite(16, LOW);
  }

  if(( prev_read3 > reading3 && (prev_read3-reading3) > 1500) || reading3 == 0){
    digitalWrite(5, HIGH);
  }
  else{
    digitalWrite(5, LOW);
  }

  if(( prev_read4 > reading4 && (prev_read4-reading4) > 400) || reading4 == 0){
    digitalWrite(0, HIGH);
  }
  else{
    digitalWrite(0, LOW);
  }

  if(( prev_read5 > reading5 && (prev_read5-reading5) > 400) || reading5 == 0){
    digitalWrite(21, HIGH);
  }
  else{
    digitalWrite(21, LOW);
  }

  if(( prev_read6 > reading6 && (prev_read6-reading6) > 800) || reading6 == 0){
    digitalWrite(18, HIGH);
  }
  else{
    digitalWrite(18, LOW);
  }

  if(( prev_read7 > reading7 && (prev_read7-reading7) > 400) || reading7 == 0){
    digitalWrite(22, HIGH);
  }
  else{
    digitalWrite(22, LOW);
  }

  if(( prev_read8 > reading8 && (prev_read8-reading8) > 1000) || reading8 == 0){
    digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(3, LOW);
  }

  if(( prev_read9 > reading9 && (prev_read9-reading9) > 400) || reading9 == 0){
    digitalWrite(17, HIGH);
  }
  else{
    digitalWrite(17, LOW);
  }

  prev_read1 = reading1;
  prev_read2 = reading2;
  prev_read3 = reading3;
  prev_read4 = reading4;
  prev_read5 = reading5;
  prev_read6 = reading6;
  prev_read7 = reading7;
  prev_read8 = reading8;
  prev_read9 = reading9;

  Serial.print("reading1:");
  Serial.println(reading1);
  Serial.print("reading2:");
  Serial.println(reading2);
  Serial.print("reading4:");
  Serial.println(reading4);
  Serial.print("reading5:");
  Serial.println(reading5);
  Serial.print("reading6:");
  Serial.println(reading6);
  Serial.print("reading7:");
  Serial.println(reading7);
  Serial.print("reading8:");
  Serial.println(reading8);
  Serial.print("reading9:");
  Serial.println(reading9);

  delay(500);
}
