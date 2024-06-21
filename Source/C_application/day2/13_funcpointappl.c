#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int substract(int a, int b){
    return a-b;
}
int multiply(int a , int b){
    return a*b;
}
float divide(int a, int b){
    return (float)a/b;
}

int main() {
    typedef int (*calculator)(int , int);
    
    int num1, num2;
    char operator;
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);
    printf("연산자를 선택하세요 (+, -, *, /): ");
    scanf(" %c", &operator);
    switch (operator) {
        case '+' :
        calculator operation = add;
        case '-' :
        calculator operation = substract;
        case '*' :
        calculator operation = multiply;
        case '/' :
        calculator operation = divide;
    }
    int result = operation(num1, num2);
    printf("결과: %d\n", result);
    return 0;
}