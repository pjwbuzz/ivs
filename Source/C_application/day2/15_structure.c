#include <stdio.h>
typedef struct {
    char c_1; // 1 바이트
    char c_2; // 1 바이트
    char c_3; // 1 바이트
    char c_4; // 1 바이트
    int i_1; // 4 바이트
} Dest;
int main() {
    char source[8] = {0x01, 0x02, 0x03, 0x04, 0x04, 0x03, 0x02, 0x01};
    Dest destination;
    memcpy(&destination, &source,sizeof(destination));
    printf("c_1 = %02x\n",destination.c_1);
    printf("c_2 = %02x\n",destination.c_2);
    printf("c_3 = %02x\n",destination.c_3);
    printf("c_4 = %02x\n",destination.c_4);
    printf("i_1 = %08x\n",destination.i_1);
    return 0;
}