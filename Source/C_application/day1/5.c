#include <stdio.h>
#include <stdint.h>
int main() {
    uint8_t flags = 0;
    flags |= 0b10101101;
    //fail_0부터 fail_7까지 값을 검색하고 출력합니다.

    for(int i=0;i<8;i++){
        char flag = (flags>>i)&1;
        printf("Fail_%d: %d\n", i, flag);
    }

    return 0;
}