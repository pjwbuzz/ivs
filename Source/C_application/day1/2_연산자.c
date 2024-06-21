#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 0;
    printf("num++ : %d\n", num++);
    printf("num : %d\n", num);
    printf("num-- : %d\n", num--);
    printf("num : %d\n", num);
    printf("++num : %d\n", ++num);
    printf("--num : %d\n", --num); 
    
    num = 0;
    printf("++ :%d, --:%d\n",num++,num--);
}