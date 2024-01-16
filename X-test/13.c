#include <Servo.h>

// Define pin connections
int gasSensorPin = A0;  // Analog input pin for gas sensor
int servoPin = 9;       // PWM pin for servo control
int buzzerPin = 10;     // Digital output pin for buzzer
int fanPin = 11;        // Digital output pin for fan

Servo gasSwitch;               // Create a servo object

void setup() {
  pinMode(gasSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(fanPin, OUTPUT);

  gasSwitch.attach(servoPin);  // Attach the servo to the specified pin
  gasSwitch.write(90);         // Set the servo to the initial position (adjust as needed)
  Serial.begin(9600);
}

void loop() {
  int gasValue = analogRead(gasSensorPin);

  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  // Check if gas concentration exceeds the threshold
  if (gasValue > 400) {
    // Gas detected, turn off the gas flow, activate alarm, and turn on the fan
    gasSwitch.write(0);       // Adjust the angle based on your servo and gas flow switch setup
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(fanPin, HIGH);
    Serial.println("Gas Leakage Detected! Gas Supply Cut Off. Alarm Activated. Fan Turned On.");
  } else {
    // No gas detected, turn on the gas flow, deactivate alarm, and turn off the fan
    gasSwitch.write(90);      // Adjust the angle based on your servo and gas flow switch setup
    digitalWrite(buzzerPin, LOW);
    digitalWrite(fanPin, LOW);
    Serial.println("Gas Leakage Stop!");
  }

  delay(1000); // Adjust the delay based on your requirements
}
