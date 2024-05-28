#include <stdio.h>
//score를 입력받아 학점 출력
int main(){
    int score;
    printf("점수는 >> ");
    scanf("%d", &score);
    if(90<=score && score<= 100){
        printf("A학점");
    }else if(80<=score && score<90){
        printf("B학점");
    }else if(70<=score && score<80){
        printf("C학점");
    }else if(60<=score && score<70){
        printf("D학점");
    }else if(0<=score && score<60){
        printf("F학점");
    }else{
        printf("유효하지 않는 점수입니다.");
    }
    
}