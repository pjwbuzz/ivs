#include <IRremote.hpp> //IR 리모컨 라이브러리.
#define PIN_IR_RECEIVE 2
void setup()
{
  Serial.begin(115200); //시리얼 모니터 사용
  IrReceiver.begin(PIN_IR_RECEIVE, ENABLE_LED_FEEDBACK);
}
void loop() {
  if (IrReceiver.decode() == true) // 리모컨으로부터 받은 신호가 있으면
  {
    if (IrReceiver.decodedIRData.protocol == NEC) {
      Serial.println(IrReceiver.decodedIRData.command, HEX);
      //받은 신호를 시리얼 모니터에 출력
    }
    IrReceiver.resume(); // 다음 신호 수신
  }
}
