#define PIN_LINE_DETECT_RIGHT A0
#define PIN_LINE_DETECT_LEFT A1
void setup()
{
Serial.begin(115200); //시리얼 모니터 사용
}
void loop() {
Serial.print(analogRead(PIN_LINE_DETECT_LEFT));
Serial.print(" : ");
Serial.println(analogRead(PIN_LINE_DETECT_RIGHT));
delay(100);
}
