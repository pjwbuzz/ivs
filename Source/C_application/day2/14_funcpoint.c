//046 funcpoint_2.c 참고해서 다시 복습해야할듯
#include <stdio.h>
// 제곱 함수
double square(double x) {
    return x * x;
}
// 세제곱 함수
double cube(double x) {
    return x * x * x;
}
// 네제곱 함수
double fourthPower(double x) {
    return x * x * x * x;
}

int main() {
    double (*functionPointers[])(double) = {square, cube, fourthPower};
    double input;
    printf("실수를 입력하세요 (0을 입력하면 종료) : ");
    scanf("%lf",&input);

    typedef double (*functionPointers)
    ans = functionPointers[i](input);
    printf("프로그램을 종료합니다.\n");
    return 0;
}