#include <stdio.h>
// 산술연산자 : + - / & %
int main(void) {
    int n1 = 33, n2 = 10;
    printf("%d %c %d = %d\n", n1, '/', n2, n1/n2);
    printf("%d %c %d = %.31f\n", n1, '/', n2, (double)n1/n2);  //명시적인 형변환이라고 함
    //형변환 : 묵시적형변환 int i = 3.2 
    //         명시적형변환 (double)n1  , 파이썬에서는 double(n1)
    printf("%d %c %d = %d\n", n1, '%', n2, n1%n2);

    //나머지 연산자 : 그룹을 나눌 때 주로 사용 (학번이 짝수/홀수 등)
    if(n1%2 == 0)
    printf("n1은 짝수");
    else
    printf("n1은 홀수");
    
}