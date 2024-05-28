#include <stdio.h>
int main(){
    int num = 3;
    //switch(정수형이나 문자형, 문자열은 안됨)
    switch(num)
    {
        case 1:
            printf("주사위 1"); break;
        case 2:
            printf("주사위 2"); break;
        case 3:
            printf("주사위 3"); break;
        case 4:
            printf("주사위 4"); break;
        case 5:
            printf("주사위 5"); break;
        default:
            printf("주사위 6");
    }
}