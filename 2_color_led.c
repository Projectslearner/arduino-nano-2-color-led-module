/*
    Project name : 2-color LED module
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-2-color-led-module
*/

// Define the pins for the LED module
const int redPin = 2;    // Red LED pin
const int greenPin = 3;  // Green LED pin

void setup() 
{
  // Set the LED pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() 
{
  // Turn on the red LED and off the green LED (Red color)
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(1000);  // Wait for 1 second
  
  // Turn off the red LED and on the green LED (Green color)
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(1000);  // Wait for 1 second
}
