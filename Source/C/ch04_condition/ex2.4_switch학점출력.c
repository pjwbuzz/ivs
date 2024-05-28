#include <stdio.h>
//score를 입력받아 학점출력
int main(){
    int score;
    printf("점수는 >> ");
    scanf("%d", &score);
    int temp = score==100 ? 99 : score; //이렇게 3항연산자 이용해서 101점 같은 상황 방지가능
    switch(temp/10)
    {
        case 9:
            printf("A학점");
            break;
        case 8:
            printf("B학점");
            break;
        case 7:
            printf("C학점");
            break;
        case 6:
            printf("D학점");
            break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            printf("F학점");
            break;
        default:
            printf("유효하지 않는 점수입니다.");
            break;
    
    }
}