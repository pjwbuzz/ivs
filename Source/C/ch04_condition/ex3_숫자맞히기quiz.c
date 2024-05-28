#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand( (unsigned int)time(NULL));
    int num = rand()%100+1;
    int chance = 5;
    int inputnum=101;
    while(num != inputnum){
        inputnum = 101;
        printf("숫자를 입력하세요(남은기회 %d번) >>",chance);
        scanf("%d",&inputnum);
        if(num<inputnum) printf("DOWN!\n");
        else if(num>inputnum) printf("UP!\n");
        else if(num==inputnum) break;
        else printf("알 수 없는 오류가 발생했어요.");
        chance--;
        if(chance==0){
            printf("5번의 모든 기회를 사용했어요. 아쉽게도 실패했습니다.");
            return 0;
        }
    }
    printf("%d는 정답입니다. 축하합니다. %d번만에 성공", num, 5-chance);
}