#include <Arduino.h>

#define LED_PIN 16

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("");
  Serial.println("Hello World!");
  Serial.println("This is my first esp8266 code!");
}

void loop() {
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
}