int relay = 9;
int button = 2;

void setup() {
  pinMode(relay, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  if (digitalRead(button) == HIGH) {
    digitalWrite(relay, HIGH);
  }
  else {
    digitalWrite(relay, LOW);
  }
}
