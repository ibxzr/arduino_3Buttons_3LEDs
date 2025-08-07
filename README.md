# Arduino 3 Buttons 3 LEDs Project

This project demonstrates how to control three LEDs using three pushbuttons with an Arduino Uno.  
Each button controls a corresponding LED — when the button is pressed, the LED turns on.

## 🔌 Components
- 1 × Arduino Uno
- 3 × Pushbuttons
- 3 × LEDs (any color)
- 3 × 220Ω resistors (for LEDs)
- 3 × 10kΩ resistors (for buttons)
- Breadboard and jumper wires

## 🧠 How It Works
Each pushbutton is connected to a digital input pin with a pull-down resistor.  
When the button is pressed, the input goes HIGH, and the corresponding LED (connected to a digital output pin) is turned on.

## 🛠️ Circuit Overview
- Button 1 → pin 2
- Button 2 → pin 3
- Button 3 → pin 4  
- LED 1 → pin 10  
- LED 2 → pin 11  
- LED 3 → pin 12  
Each LED is connected in series with a 220Ω resistor, and each button has a 10kΩ pull-down resistor to GND.

## 🔁 Behavior
- Press Button 1 → LED 1 turns ON
- Press Button 2 → LED 2 turns ON
- Press Button 3 → LED 3 turns ON

## 📷 Output
![Output Wiring](output_wiring.jpj)

## 💻 Arduino Code

```cpp
// constants won't change. They're used here to set pin numbers:
const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;

const int ledPin1 = 10;
const int ledPin2 = 11;
const int ledPin3 = 12;

// variables will change:
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);

  digitalWrite(ledPin1, buttonState1);
  digitalWrite(ledPin2, buttonState2);
  digitalWrite(ledPin3, buttonState3);
}
