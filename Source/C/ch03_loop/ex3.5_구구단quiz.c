#include <stdio.h>
//출력을 원하는 구구단 수를 입력(scanf)받아 해당 구구단 출력
int main() {
    int dansu;
    printf("원하는 단수를 입력하세요 : ");
    scanf("%d",&dansu);
    printf("%d단 구구단입니다.\n",dansu);
    for(int i=1 ; i<=9; i++){
        printf("%d X %d = %d\n", dansu, i,dansu*i);
    }
}
