#define PIN_MOTOR_CTRL_0 3
#define PIN_MOTOR_CTRL_1 11
#define PIN_SWITCH_GREEN 8
#define PIN_SWITCH_YELLOW 7

int prevSwitchGreen = HIGH;
int prevSwitchYellow = HIGH;

byte motorCtrlValue0 = 127;

void setup() {
    pinMode(PIN_SWITCH_GREEN, INPUT);
    pinMode(PIN_SWITCH_YELLOW, INPUT);
    pinMode(PIN_MOTOR_CTRL_0, OUTPUT);
    pinMode(PIN_MOTOR_CTRL_1, OUTPUT);
    analogWrite(PIN_MOTOR_CTRL_0, 0);
    analogWrite(PIN_MOTOR_CTRL_1, 0);
    Serial.begin(115200);
}

void loop() {
    int currentSwitchGreen = digitalRead(PIN_SWITCH_GREEN);
    int currentSwitchYellow = digitalRead(PIN_SWITCH_YELLOW);
    
    if ((prevSwitchGreen == LOW) && (currentSwitchGreen == HIGH)) {
        motorCtrlValue0 = (motorCtrlValue0 < 245) ? (motorCtrlValue0 + 10) : 255;
        analogWrite(PIN_MOTOR_CTRL_0, motorCtrlValue0);
        analogWrite(PIN_MOTOR_CTRL_1, 127);
        Serial.print("정방향");
        Serial.println(motorCtrlValue0);
    }
    
    if ((prevSwitchYellow == LOW) && (currentSwitchYellow == HIGH)) {
        motorCtrlValue0 = (motorCtrlValue0 > 10) ? (motorCtrlValue0 - 10) : 0;
        analogWrite(PIN_MOTOR_CTRL_0, motorCtrlValue0);
        analogWrite(PIN_MOTOR_CTRL_1, 127);
        Serial.print("역방향");
        Serial.println(motorCtrlValue0);
    
    }
    prevSwitchGreen = currentSwitchGreen;
    prevSwitchYellow = currentSwitchYellow;
    
    delay(100);
}
