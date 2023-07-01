#include <Arduino.h>
#line 1 "C:\\Users\\cl4pp\\Desktop\\github\\arduino-workshop\\blink_led\\blink_led.ino"
int PIN_A = 9;
int PIN_B = 10;

void switchA() {
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, HIGH);
}

void switchB() {
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, HIGH);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_A, OUTPUT);
  pinMode(PIN_B, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchB();
  delay(100);
  switchA();
}

