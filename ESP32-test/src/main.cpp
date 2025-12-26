#include <Arduino.h>

#define LED_PIN 2

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("-- ESP32 Arduino Core Test --");
  randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
  int rand = random(1,11);
  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED ON");
  delay(rand*50);
  Serial.println(rand);
  digitalWrite(LED_PIN, LOW);
  Serial.println("LED OFF");
  delay(rand*50);
  Serial.println(rand);
}