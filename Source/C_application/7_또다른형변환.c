#include <stdio.h>
#include <stdlib.h>
int main() {
    char s8_1 = 0, s8_2 = 0;
    short s16_1 = 32767;
    int s32_1 = -1;
    unsigned int u32_1 = 1;
    printf("1. %d\n", sizeof(s8_1));
    printf("2. %d, %d, %u\n", sizeof(32767 * 100000), 32767*100000, 32767*100000);
    printf("3. %d, %u\n", -1, -1);
    if(s32_1<u32_1){
        printf("4. s32_1 < u32_1 is true\n");
    }
    else{
        printf("4. s32_1 < u32_1 is false \n");
    }
    system("pause");
    return 0;
}