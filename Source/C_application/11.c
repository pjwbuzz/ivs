#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1;
    scanf("%d",&num1);
    switch(num1)
    {
    case 1:
        printf("1입니다.\n");
        break;
    case 2:
        printf("2입니다.\n");
        break;
    default:
    printf("default\n");
    break;
    }
    system("pause");
    return 0;
}