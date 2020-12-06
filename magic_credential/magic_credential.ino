#include "DigiKeyboard.h"
#include "password.h"

extern const String PASSWORD;

void setup() {
  pinMode(0, true);
  pinMode(1, true);
  
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.delay(20);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(20);
  
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  DigiKeyboard.print(PASSWORD);
  DigiKeyboard.delay(10);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
}


void loop() {
  DigiKeyboard.delay(5000);
}
