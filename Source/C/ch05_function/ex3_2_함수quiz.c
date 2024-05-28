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
        printf("%d�ܰ� �����Դϴ�.\n",level);
    }
    else{
        printf("%d�ܰ� �����Դϴ�. ���� �����Դϴ�.\n",level);
        break;
    }
}
if(level>3){
    printf("3�ܰ���� �� ���̽��ϴ�. �����Դϴ�. \n\n");
}

}

int getRandomNumber(int level){
    return (rand()%4+(level-1)*4+1);
}
void showQuestion(int level, int num1, int num2){
    printf("%d���� �������� ����~\n",level);
    printf("��Ʈ : %d X %d >> ",num1,num2);
}