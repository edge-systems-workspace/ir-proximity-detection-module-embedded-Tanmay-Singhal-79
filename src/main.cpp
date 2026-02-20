#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author TANMAY SINGHAL
 * @date 2026-02-17
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

 // TODO 1:
 // Define IR sensor digital pin (Use pin 2)
 int irSensorPin = 2;

 // TODO 2:
 // Create variable to store sensor state
 int irState = 0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Configure IR pin as INPUT
    pinMode(irSensorPin, INPUT);

    // TODO 5:
    // Print system initialization message
    Serial.println("IR Obstacle Detection System Started");
}

void loop() {

    // TODO 6:
    // Read digital value from IR sensor
    irState = digitalRead(irSensorPin);

    // TODO 7:
    // If obstacle detected
    //     Print "Obstacle Detected"
    // Else
    //     Print "No Obstacle"

    // NOTE:
    // Most IR sensors give LOW when obstacle is detected
    if (irState == LOW) {
        Serial.println("Obstacle Detected");
    }
    else {
        Serial.println("No Obstacle");
    }

    // TODO 8:
    // Add small delay (200–500ms)
    delay(300);
}
