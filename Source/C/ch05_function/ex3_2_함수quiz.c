#include <stdio.h>
int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);

int main(){
srand((unsigned int) time(NULL));
int answer;
int level;

for(level=1;level<=3;level++){
    int num1 = getRandomNumber(level);
    int num2 = getRandomNumber(level);
    showQuestion(level,num1,num2);
    scanf("%d",&answer);
    if(answer==(num1*num2)){
        printf("%d단계 정답입니다.\n",level);
    }
    else{
        printf("%d단계 오답입니다. 실패 종료입니다.\n",level);
        break;
    }
}
if(level>3){
    printf("3단계까지 잘 오셨습니다. 성공입니다. \n\n");
}

}

int getRandomNumber(int level){
    return (rand()%4+(level-1)*4+1);
}
void showQuestion(int level, int num1, int num2){
    printf("%d레벨 구구단을 외자~\n",level);
    printf("힌트 : %d X %d >> ",num1,num2);
}