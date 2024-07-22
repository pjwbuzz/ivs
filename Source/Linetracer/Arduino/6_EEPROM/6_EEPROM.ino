#include <Servo.h>
#include <EEPROM.h>
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
int rotateFlag;
Servo servoRotate;
void setup() {
  attachInterrupt(digitalPinToInterrupt
                  (PIN_SWITCH_BLACK), isrSwitchBlack, RISING);
  servoRotate.attach(PIN_SERVO_CTRL);
  servoRotate.write(90);
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
  Serial.print("EEPROM.read(0) : ");
  Serial.println(EEPROM.read(0));
}


void loop() {
  // Fan Control
  int currentSwitchGreen = digitalRead(PIN_SWITCH_GREEN);
  int currentSwitchYellow = digitalRead(PIN_SWITCH_YELLOW);
  int currentSwitchRed = digitalRead(PIN_SWITCH_RED);
  if ((prevSwitchGreen == LOW) && (currentSwitchGreen == HIGH)) {
    analogWrite(PIN_MOTOR_CTRL_0, 127);
    Serial.println(127);
  }
  if ((prevSwitchYellow == LOW) && (currentSwitchYellow == HIGH)) {
    analogWrite(PIN_MOTOR_CTRL_0, 255);
    Serial.println(255);
  }
  if ((prevSwitchRed == LOW) && (currentSwitchRed == HIGH)) {
    analogWrite(PIN_MOTOR_CTRL_0, 0);
    Serial.println(0);
  }
  prevSwitchGreen = currentSwitchGreen;
  prevSwitchYellow = currentSwitchYellow;
  prevSwitchRed = currentSwitchRed;
  // Rotate Control
  int currentSwitchBlue = digitalRead(PIN_SWITCH_BLUE);
  if ((prevSwitchBlue == LOW) && (currentSwitchBlue == HIGH)) {
    EEPROM.write(0, EEPROM.read(0) + 1);
    rotateFlag = 1;
  }
  if ((servoRotate.read() < 30) || (servoRotate.read() > 150)) {
    rotateFlag = rotateFlag * (-1);
  }
  if (rotateFlag != 0) {
    servoRotate.write(servoRotate.read() + rotateFlag);
  }
  prevSwitchBlue = currentSwitchBlue;
  delay(100);
}
void isrSwitchBlack() {
  rotateFlag = 0;
  servoRotate.write(90);
}
