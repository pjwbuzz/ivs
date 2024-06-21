#include <stdio.h>
#include <stdint.h>
#include <string.h>
typedef struct {
uint8_t field1 : 4;
uint8_t field2 : 4;
uint8_t field3 : 4;
uint8_t field4 : 4;
} BitFieldData;
int main() {
uint8_t dataArray[2] = { 0x2A, 0x5B }; // Binary: 00101010 01011011
BitFieldData data1;
// 복사할 데이터를 배열에서 추출
memcpy(&data1, dataArray, sizeof(BitFieldData));
printf("Data 1:\n");
printf("Field 1: %x\n", data1.field1);
printf("Field 2: %x\n", data1.field2);
printf("Field 3: %x\n", data1.field3);
printf("Field 4: %x\n", data1.field4);
return 0;
}