#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author PRIYAL GARG
 * @date 2026-02-19
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

IR_PIN 5

void setup() {

    pinMode(IR_PIN, INPUT);
    Serial.begin(9600);
}

void loop() {

    int irValue = digitalRead(IR_PIN);

    if (irValue == LOW) {
        Serial.println("Object Detected");
    } else {
        Serial.println("No Object");
    }

    delay(200);
}
