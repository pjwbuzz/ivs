#include <stdio.h>
#include <stdlib.h>
int main() {
long long *numPtr1; // long long형 포인터 선언
float *numPtr2; // float형 포인터 선언
char *cPtr1; // char형 포인터 선언
long long num1 = 10;
float num2 = 3.5f;
char c1 = 'a';
numPtr1 = &num1;
numPtr2 = &num2;
cPtr1 = &c1;
printf("%lld\n", *numPtr1);
printf("%f\n", *numPtr2);
printf("%c\n", *cPtr1);
system("pause");
return 0; }

