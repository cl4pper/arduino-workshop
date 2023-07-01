int PIN_A = 9;
int PIN_B = 10;

void switchA() {
  digitalWrite(PIN_A, HIGH);
  digitalWrite(PIN_B, LOW);
  delay(1000);
}

void switchB() {
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, HIGH);
  delay(1000);
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
