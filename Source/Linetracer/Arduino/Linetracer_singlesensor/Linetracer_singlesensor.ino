#include <IRremote.hpp> //IR 리모컨 라이브러리.
#define PIN_IR_RECEIVE 2
#define PIN_MOTOR_LEFT_FORWARD 9
#define PIN_MOTOR_LEFT_BACKWARD 10
#define PIN_MOTOR_RIGHT_FORWARD 5
#define PIN_MOTOR_RIGHT_BACKWARD 6
#define PIN_LINE_DETECT_RIGHT A0
#define PIN_LINE_DETECT_LEFT A1
#define REF_VALUE_LINE_DETECT 100
int motorSpeedLeft = 0; // -255~255
int motorSpeedRight = 0; // -255~255
int isStartLineTracing = 0;
int detectValueLeft = 0;
int detectValueRight = 0;
int dirFlag = 1;
int delayVal = 1;
int previousVal = 0;

void processMotor(void);
void processMotor(void) {
  if (motorSpeedLeft >= 0) {
    analogWrite(PIN_MOTOR_LEFT_FORWARD, motorSpeedLeft);
    analogWrite(PIN_MOTOR_LEFT_BACKWARD, 0);
  }
  else {
    analogWrite(PIN_MOTOR_LEFT_FORWARD, 0);
    analogWrite(PIN_MOTOR_LEFT_BACKWARD, motorSpeedLeft * (-1));
  }
  if (motorSpeedRight >= 0) {
    analogWrite(PIN_MOTOR_RIGHT_FORWARD, motorSpeedRight);
    analogWrite(PIN_MOTOR_RIGHT_BACKWARD, 0);
  }
  else {
    analogWrite(PIN_MOTOR_RIGHT_FORWARD, 0);
    analogWrite(PIN_MOTOR_RIGHT_BACKWARD, motorSpeedRight * (-1));
  }
}
void checkDir(int dir);
void checkDir(int dir) {
  if (dir == 0) {  //왼쪽으로 움직이기
    motorSpeedLeft = 50;
    motorSpeedRight = 200;
  }

  else if (dir == 1) {
    motorSpeedLeft = 200;
    motorSpeedRight = 50;
  }
}
void setup() {
  IrReceiver.begin(PIN_IR_RECEIVE, ENABLE_LED_FEEDBACK);
  pinMode(PIN_MOTOR_LEFT_FORWARD, OUTPUT);
  pinMode(PIN_MOTOR_LEFT_BACKWARD, OUTPUT);
  pinMode(PIN_MOTOR_RIGHT_FORWARD, OUTPUT);
  pinMode(PIN_MOTOR_RIGHT_BACKWARD, OUTPUT);
  analogWrite(PIN_MOTOR_LEFT_FORWARD, 0);
  analogWrite(PIN_MOTOR_LEFT_BACKWARD, 0);
  analogWrite(PIN_MOTOR_RIGHT_FORWARD, 0);
  analogWrite(PIN_MOTOR_RIGHT_BACKWARD, 0);
}

void loop() {
  if (IrReceiver.decode() == true) {
    if (IrReceiver.decodedIRData.protocol == NEC) {
      if (IrReceiver.decodedIRData.command == 0x16) { // *
        isStartLineTracing = 1;
      }
      else if (IrReceiver.decodedIRData.command == 0x0D) { // #
        isStartLineTracing = 0;
      }
    }
    IrReceiver.resume();
  }

  if (isStartLineTracing == 0) {
    motorSpeedLeft = 0;
    motorSpeedRight = 0;
  }
  else {
    detectValueLeft = analogRead(PIN_LINE_DETECT_LEFT);
    //    if ((detectValueLeft > REF_VALUE_LINE_DETECT)&(previousVal > REF_VALUE_LINE_DETECT)) { // 검은선 감지
    //      motorSpeedLeft = 255;
    //      motorSpeedRight = 255;
    //    }
    if ((previousVal > REF_VALUE_LINE_DETECT) ^ (detectValueLeft > REF_VALUE_LINE_DETECT)) {

      //이전에 검정, 이번에 하양 이면  방향 변경
      dirFlag ^= 1;
    }

    checkDir(dirFlag);
  }
  previousVal = detectValueLeft;
  processMotor();

}
