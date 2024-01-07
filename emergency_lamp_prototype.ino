int value;
void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop() {
  value = analogRead(A0);
  Serial.println(value);
  if (value > 100) {
    digitalWrite(8, LOW);
  } else {
    digitalWrite(8, HIGH);
  }
  delay(10);
}
