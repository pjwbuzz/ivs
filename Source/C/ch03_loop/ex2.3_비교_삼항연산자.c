#include <stdio.h>
#include <stdbool.h>
//비교연산자 : < <= > >= != ...
//삼항연산자 : (조건) ? (조건이 참일때의값) : (조건이 거짓일때 값)
int main(){
    int n1 = 10, n2 = 5;
    //int result = n1>=n2;  //이렇게만 하면 결과값이 0,1 이라 맘에안듬 t/f로 출력원함
    bool result = n1<=n2;
    printf("%d %s %d 는 %s\n", n1, "<=", n2, result? "참":"거짓");  //3항연산자 

}