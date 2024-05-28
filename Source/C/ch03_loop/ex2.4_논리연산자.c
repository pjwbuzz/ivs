#include <stdio.h>
//논리 연산자 : &&(and), ||(or), !(not)
int main(){
    int i=1, j=10, h=10;

    //&&연산의 경우 좌항이 false인 경우 우항은 실행하지 않고 결과를 false로 계산
    printf("(i>j) && (++j>h) = %s\n", (i>j) && (++j>h) ? "참":"거짓");
    printf("j = %d\n", j);    //뒤 항이 실행되지 않아 ++이 적용되지 않음, j=10 유지

    //||연산은 좌항이 true이면 우항 실행X
    printf("(i<j) || (++j>h) = %s\n", (i<j) || (++j>h) ? "참":"거짓");
    printf("j = %d\n", j);

    //
}