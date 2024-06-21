#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_LOTTO_NUMBER 45

void generateLottoNumber(int lottoNum[7]) {
    srand((unsigned)time(NULL));
    for (int i = 0; i < 7; i++) {
        lottoNum[i] = (rand() % MAX_LOTTO_NUMBER) + 1;
        for(int j=0;j<i;j++){
        if(memcmp(lottoNum[i],lottoNum[j],sizeof(lottoNum[i]))==0){i--;break;}
        }
}}
void printResult(int lottoNum[7], int inputNum[6]) {
    int count = 0;
    for(int i=0;i<6;i++){
        for(int j=0 ; j<6 ; j++){
            if(memcmp(lottoNum[i],inputNum[j],sizeof(lottoNum[i]))==0){count++;}
        }
    }
    if(count==5){
        for(int i=0;i<6;i++){
            if(memcmp(lottoNum[6],inputNum[i],sizeof(lottoNum[i]))==1){count++;}
    }
    }
    printf("%d",count);
}
int main(void) {
    int lottoNum[7], inputNum[6];
    int equalCount = 0;

    generateLottoNumber(lottoNum);
    printf("lotto number : %d %d %d %d %d %d\n", lottoNum[0], lottoNum[1], 
    lottoNum[2], lottoNum[3], lottoNum[4], lottoNum[5]);
    printf("bonus number : %d\n", lottoNum[6]);

    printf("\nplease input 6 number : ");
    scanf("%d %d %d %d %d %d", &inputNum[0], &inputNum[1], &inputNum[2], 
    &inputNum[3], &inputNum[4], &inputNum[5]);
    printResult(lottoNum, inputNum);

    system("pause");
    return 0;
}
