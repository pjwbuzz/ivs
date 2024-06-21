#include <stdio.h>
#include <stdint.h>
// 비트 필드를 사용하여 구조체 정의
typedef struct {
    uint16_t currentData1 : 10;
    uint16_t currentData2 : 10;
    uint16_t currentData3 : 10;
    uint16_t currentData4 : 10;
    uint16_t gsensor1 : 6;
    uint16_t gsensor2 : 6;
    uint16_t gsensor3 : 6;
    uint16_t gsensor4 : 6;
} myData;

int main() {
    uint8_t canDataArray[8] = { 0x64, 0xC8, 0x00, 0x00, 0x01, 0x32, 0x4E, 0x28 };
    myData mydata;
    // 데이터를 비트 필드로 복사
    memcpy(&mydata,&canDataArray,sizeof(mydata));

    printf("Current Data:\n");
    printf("Current 1: %x\n", mydata.currentData1);
    printf("Current 2: %x\n", mydata.currentData2);
    printf("Current 3: %x\n", mydata.currentData3);
    printf("Current 4: %x\n", mydata.currentData4);
    printf("\nGsensor Data:\n");
    printf("Gsensor 1: %x\n", mydata.gsensor1);
    printf("Gsensor 2: %x\n", mydata.gsensor2);
    printf("Gsensor 3: %u\n", mydata.gsensor3);
    printf("Gsensor 4: %u\n", mydata.gsensor4);
    return 0;
}