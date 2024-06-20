#include <stdio.h>
#include <stdlib.h>
int main() {
    // unsigned char num1 = 131;  // 131 : 1000 0011
    // char num2 = -125;       // -125 : 1000 0011   부호가 있는 자료형은 맨 앞자리가 부호비트이다.
    // printf("%u\n",num1 >>5);    // num1>>5 : 0000 0100
    // printf("%d\n",num2>>5);     // num2>>5 : 0000 0100
    
    // // char num1 = 113;
    // // char num2 = -15;
    // // char num3, num4, num5, num6;
    // // printf("%d\n",(char)(num1<<2));
    // // printf("%d\n",(char)(num2<<2));
    // // printf("%d\n",(char)(num1<<2));
    // // printf("%d\n",(char)(num2<<2));

    int num1 = -2000;
    printf("%d\n", num1/256);
    printf("%d\n",num1>>8);  // 음수일떄는 비트쉬프트를 조심해라
}