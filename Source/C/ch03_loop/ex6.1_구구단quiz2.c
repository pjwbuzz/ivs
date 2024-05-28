#include <stdio.h>
int main(){
    int min,max;
    printf("구구단을 몇단부터 몇단까지 출력할지 최소구구단수와 최대구구단수 >>");
    scanf("%d %d",&min,&max);
    for(int i=1;i<=9;i++){
        for(int j=min;j<=max;j++){
            printf("%d X %d = %d\t",j,i,j*i);
        }
        printf("\n");
    }
}