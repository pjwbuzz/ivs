#include <stdio.h>
int main() {
int array[5] = {10, 20, 30, 40, 50}; // 5개의 정수를 가지는 배열 선언
int *ptr1 = &array[0]; // 0 번째 변수에 대한 포인터 할당
int *ptr2 = &array[4]; // 4 번째 변수에 대한 포인터 할당
int difference = ptr2 - ptr1; // 두 포인터의 뺄셈
printf("0 번째 변수의 값: %p\n", *ptr1);
printf("4 번째 변수의 값: %p\n", *ptr2);
printf("0 번째 변수와 4 번째 변수의 차이: %d\n", difference);
return 0;
}