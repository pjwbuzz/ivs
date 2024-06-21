#include <stdio.h>
typedef struct {
char c_1; // 1 바이트

int i_1; // 4 바이트
int i_2; // 4 바이트
char pedding_1; // 1 바이트
char pedding_2; // 1 바이트
char pedding_3; // 1 바이트
} Dest;
int main() {
    char source[12] = {0x01, 0x04, 0x03, 0x02, 0x01, 0x05, 0x06, 0x07, 0x08, 0x09, 0x10, 0x11};
    Dest destination;
    memcpy(&destination, &source,sizeof(destination));
    printf("c_1 = %02x\n",destination.c_1);
    printf("i_1 = %08x\n",destination.i_1);
    printf("i_2 = %08x\n",destination.i_2);
    return 0;
}