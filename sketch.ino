#include <Servo.h>

// Defines pin numbers for each component
#define MOTION_SENSOR_PIN 2
#define ENCODER_PIN_A 3
#define ENCODER_PIN_B 4
#define RANGE_FINDER_PIN A0
#define ACCELEROMETER_PIN A1
#define NEOPIXEL_PIN 5
#define SERVO_PIN 6
#define LED_MATRIX_PIN 7
#define RELAY_PIN 8

// Variables to store the encoder state
int encoderPinALast;
int encoderValue;

// Creates a Servo object
Servo servo;

void setup() {
  // Start serial communication
  Serial1.begin(115200);
  Serial1.println("Hello, Raspberry Pi Pico W!");

  // Set up motion sensor, relay, and encoder pins as inputs
  pinMode(MOTION_SENSOR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(ENCODER_PIN_A, INPUT);
  pinMode(ENCODER_PIN_B, INPUT);

  // Set up Neopixel, Servo, and LED Matrix pins as outputs
  pinMode(NEOPIXEL_PIN, OUTPUT);
  pinMode(LED_MATRIX_PIN, OUTPUT);
  servo.attach(SERVO_PIN);

  // Initialize the encoder state
  encoderPinALast = digitalRead(ENCODER_PIN_A);
  encoderValue = 0;
}

void loop() {
  // Read the state of the motion sensor
  int motion = digitalRead(MOTION_SENSOR_PIN);

  // If motion is detected, turn on Neopixel LED and relay
  if (motion == HIGH) {
    digitalWrite(NEOPIXEL_PIN, HIGH);
    digitalWrite(RELAY_PIN, HIGH);
  } else {
    // If no motion is detected, turn off Neopixel LED and relay
    digitalWrite(NEOPIXEL_PIN, LOW);
    digitalWrite(RELAY_PIN, LOW);
  }

  // Read the state of the encoder
  int encoderPinA = digitalRead(ENCODER_PIN_A);
  if ((encoderPinALast == LOW) && (encoderPinA == HIGH)) {
    if (digitalRead(ENCODER_PIN_B) == LOW) {
      encoderValue--;
    } else {
      encoderValue++;
    }
  }
  encoderPinALast = encoderPinA;

  // Print encoder value to the serial monitor for debugging
  Serial1.println(encoderValue);

  // More code will go here to handle the other components later on ...

  delay(1); // speeds up the simulation
}

