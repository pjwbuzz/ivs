#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
    unsigned int c;
    system("chcp 65001");
    scanf("%d",&c);
    switch(c)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        printf("5보다 작거나 같은 수");
        case 6:
        case 7:
        printf("5와 8사이");
        break;
        case 8:
        default:
        printf("8보다 크거나 같은 수");
        
    }
    system("pause");
    return 0;
}