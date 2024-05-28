#include <stdio.h>
void line(int cnt); //함수선언 (반환값이 없는 함수)
//void line(); 같은 이름의 함수 선언 불가
void noArg(); //함수 선언 (매개변수가 없는 함수)

int main(){
    line(40); // 함수 호출 
    noArg();
    line(50);
}
void line(int cnt){
    for(int i=0;i<cnt;i++){
        printf("=");
    }
    printf("\n");
}
void noArg(){
    printf("반환값도 매개변수도 없는 함수 \n");
}