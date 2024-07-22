#include <Servo.h>
#define PIN_MOTOR_CTRL_0 3
#define PIN_MOTOR_CTRL_1 11
#define PIN_SWITCH_GREEN 8
#define PIN_SWITCH_YELLOW 7
#define PIN_SWITCH_RED 6
#define PIN_SWITCH_BLACK 2
#define PIN_SWITCH_BLUE 4
#define PIN_SERVO_CTRL 13
int prevSwitchGreen = HIGH;
int prevSwitchYellow = HIGH;
int prevSwitchRed = HIGH;
int prevSwitchBlue = HIGH;
int rotate = 0;
int dir = 0;
byte motorCtrlValue0;
byte servoPosition = 90;
Servo servoRotate;
void setup() {
  attachInterrupt(digitalPinToInterrupt(PIN_SWITCH_BLACK), isrSwitchBlack, RISING);
  servoRotate.attach(PIN_SERVO_CTRL);
  servoRotate.write(servoPosition);
  pinMode(PIN_SWITCH_GREEN, INPUT);
  pinMode(PIN_SWITCH_YELLOW, INPUT);
  pinMode(PIN_SWITCH_RED, INPUT);
  pinMode(PIN_SWITCH_BLACK, INPUT);
  pinMode(PIN_SWITCH_BLUE, INPUT);
  pinMode(PIN_MOTOR_CTRL_0, OUTPUT);
  pinMode(PIN_MOTOR_CTRL_1, OUTPUT);
  pinMode(PIN_SERVO_CTRL, OUTPUT);
  analogWrite(PIN_MOTOR_CTRL_0, 0);
  analogWrite(PIN_MOTOR_CTRL_1, 0);
  Serial.begin(115200);
}
void loop() {
  // Fan Control
  int currentSwitchGreen = digitalRead(PIN_SWITCH_GREEN);
  int currentSwitchYellow = digitalRead(PIN_SWITCH_YELLOW);
  int currentSwitchRed = digitalRead(PIN_SWITCH_RED);
  if ((prevSwitchGreen == LOW) && (currentSwitchGreen == HIGH)) {
    motorCtrlValue0 = 127;
    analogWrite(PIN_MOTOR_CTRL_0, motorCtrlValue0);
    Serial.println(motorCtrlValue0);
  }
  if ((prevSwitchYellow == LOW) && (currentSwitchYellow == HIGH)) {
    motorCtrlValue0 = 255;
    analogWrite(PIN_MOTOR_CTRL_0, motorCtrlValue0);
    Serial.println(motorCtrlValue0);
  }
  if ((prevSwitchRed == LOW) && (currentSwitchRed == HIGH)) {
    motorCtrlValue0 = 0;
    analogWrite(PIN_MOTOR_CTRL_0, motorCtrlValue0);
    Serial.println(motorCtrlValue0);
  }
  prevSwitchGreen = currentSwitchGreen;
  prevSwitchYellow = currentSwitchYellow;
  prevSwitchRed = currentSwitchRed;

  // Rotate Control

  int currentSwitchBlue = digitalRead(PIN_SWITCH_BLUE);
  if ((prevSwitchBlue == LOW) && (currentSwitchBlue == HIGH)) {
    rotate = 1;
  }
  prevSwitchBlue = currentSwitchBlue;
  if (rotate != 0) {
    servoPosition += rotate;
    servoRotate.write(servoPosition);
    if ((servoPosition <= 30)|(servoPosition >= 150)) rotate *= -1;
  }
  servoRotate.write(servoPosition);

  delay(100);
}
void isrSwitchBlack() {
rotate = 0;
servoPosition = 90;
}
