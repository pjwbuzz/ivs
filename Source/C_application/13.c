#include <stdio.h>
#include <stdlib.h>
int main() {
float num1 = 0.1f;
char c1 = 'a';
if (num1 == 0.1f) // 실수 비교
    printf("0.1입니다.\n");
if (c1 == 'a') // 문자 비교
    printf("a입니다.\n");
if (c1 == 97) // 문자를 ASCII 코드로 비교
    printf("a입니다.\n");
if (num1*num1 == 0.01f) 
    printf("0.01입니다.\n");
else
    printf("0.01이 아닙니다.\n");

printf("%f\n",num1*num1);
system("pause");
return 0;
}
