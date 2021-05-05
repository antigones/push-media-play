#include <HID-Project.h>

const int buttonPin = 3;  // the number of the pushbutton pin
const int ledPin = 2;  // the number of the LED pin
int buttonVal = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Consumer.begin();
}

void loop() {
  buttonVal = digitalRead(buttonPin);
  if (buttonVal == 0) {
    digitalWrite(ledPin, HIGH);
    delay(250);
    Consumer.write(MEDIA_PLAY_PAUSE);
  }
  else
    digitalWrite(ledPin, LOW);
}
