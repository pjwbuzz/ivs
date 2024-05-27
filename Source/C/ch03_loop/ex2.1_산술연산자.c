#include <stdio.h>
// 산술연산자 : + - / & %
int main(void) {
    int n1 = 33, n2 = 10;
    printf("%d %c %d = %d\n", n1, '/', n2, n1/n2);
    printf("%d %c %d = %.31f\n", n1, '/', n2, (double)n1/n2);  //명시적인 형변환이라고 함
    //형변환 : 묵시적형변환 int i = 3.2 
    //         명시적형변환 (double)n1  , 파이썬에서는 double(n1)
    printf("%d %c %d = %d\n", n1, '%', n2, n1%n2);

}