// تعريف أرقام الأرجل للأزرار واللمبات
const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;

const int ledPin1 = 10;
const int ledPin2 = 11;
const int ledPin3 = 12;

// متغيرات لحالة الأزرار
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;

void setup() {
  // تعريف اللمبات كمخارج
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);

  // تعريف الأزرار كمداخل
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}

void loop() {
  // قراءة حالة الأزرار
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);

  // التحكم في اللمبات حسب حالة كل زر
  digitalWrite(ledPin1, buttonState1);
  digitalWrite(ledPin2, buttonState2);
  digitalWrite(ledPin3, buttonState3);
}