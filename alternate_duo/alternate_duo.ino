int PIN_A = 9;
int PIN_B = 10;
int TIMER = 500;

//switches values between pins - A, B, etc
void switcher(char pin) {
  if (pin == 'A') {
    digitalWrite(PIN_A, HIGH);
    digitalWrite(PIN_B, LOW);
    delay(TIMER);
  }

  else if (pin == 'B') {
    digitalWrite(PIN_A, LOW);
    digitalWrite(PIN_B, HIGH);
    delay(TIMER);
  }

  // else...
}

void setup() {
  pinMode(PIN_A, OUTPUT);
  pinMode(PIN_B, OUTPUT);
}

void loop() {
  switcher('A');
  switcher('B');
}
