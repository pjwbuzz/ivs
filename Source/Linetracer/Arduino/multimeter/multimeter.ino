void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
int adcInput = analogRead(A0);
int voltage = map(adcInput,0,1023,0,5000*2);
Serial.println(voltage);
delay(100);
}
