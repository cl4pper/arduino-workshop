int PIN_A = 9;
int PIN_B = 10;
int TIMER = 1000;

void switchA() {
  digitalWrite(PIN_A, HIGH);
  digitalWrite(PIN_B, LOW);
  delay(TIMER);
}

void switchB() {
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, HIGH);
  delay(TIMER);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_A, OUTPUT);
  pinMode(PIN_B, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchA();
  switchB();
}
