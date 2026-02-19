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

    // TODO 6:
    // Read digital value from IR sensor

    // TODO 7:
    // If obstacle detected
    //     Print "Obstacle Detected"
    // Else
    //     Print "No Obstacle"

    // TODO 8:
    // Add small delay (200–500ms)
}
