#include <IRremote.hpp> //IR 리모컨 라이브러리.
#define PIN_IR_RECEIVE 2
#define PIN_MOTOR_LEFT_FORWARD 9
#define PIN_MOTOR_LEFT_BACKWARD 10
#define PIN_MOTOR_RIGHT_FORWARD 5
#define PIN_MOTOR_RIGHT_BACKWARD 6
#define PIN_LINE_DETECT_RIGHT A0
#define PIN_LINE_DETECT_LEFT A1
#define REF_VALUE_LINE_DETECT 150
int motorSpeedLeft = 0; // -255~255
int motorSpeedRight = 0; // -255~255
int isStartLineTracing = 0;
int detectValueLeft = 0;
int detectValueRight = 0;
int dirflag = 0;
int delayVal = 1;
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
    detectValueRight = analogRead(PIN_LINE_DETECT_RIGHT);
    if ((detectValueLeft > REF_VALUE_LINE_DETECT) && (detectValueRight > REF_VALUE_LINE_DETECT)) {
      motorSpeedLeft = 255;
      motorSpeedRight = 255;
      delayVal = 1;

    }
    else if ((detectValueLeft > REF_VALUE_LINE_DETECT) && (detectValueRight < REF_VALUE_LINE_DETECT)) {  // 왼쪽에 선 감지, 오른쪽 공백
      motorSpeedLeft = ( motorSpeedLeft > -245) ? (motorSpeedLeft - 10) : -255;
      //motorSpeedLeft = -255;
      motorSpeedRight = ( motorSpeedRight > 150) ? (motorSpeedRight - 1) : 150;
      delayVal = 0;
    }
    else if ((detectValueLeft < REF_VALUE_LINE_DETECT) && (detectValueRight > REF_VALUE_LINE_DETECT)) {  //오른쪽 선 감지, 왼쪽 공백  오른쪽으로 꺾어야함, 왼쪽모터 +, 오른쪽모터 -
      motorSpeedLeft = ( motorSpeedLeft > 150) ? (motorSpeedLeft - 1) : 150;
      motorSpeedRight = ( motorSpeedRight > -245) ? (motorSpeedRight - 10) : -255;
      //motorSpeedRight = -255;
      delayVal = 0;

    }
    else {
      motorSpeedLeft = -150;
      motorSpeedRight = -150;
      delayVal = 1;

    }
  }

  processMotor();
  delay(delayVal);
}
