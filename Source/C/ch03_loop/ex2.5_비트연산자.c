#include <stdio.h>
// 비트연산자 : &(and) , |(or), ^(XOR)
int main(){
    int n1 = 10;    //0 ~ 01010  (10)
    int n2 = 6;     //0 ~ 00110  (6)
    // n1 & n2 :      0 ~ 00010  (2)
    // n1 | n2 :      0 ~ 01110  (14)
    // n1 ^ n2 :      0 ~ 01100  (12)

    printf("n1&n2 = %d\n", n1&n2);
    printf("n1|n2 = %d\n", n1|n2);
    printf("n1^n2 = %d\n", n1^n2);
    printf("n2<<1 = %d\n", n2<<1); // 0~00110 -> 0~01100 (12)
}