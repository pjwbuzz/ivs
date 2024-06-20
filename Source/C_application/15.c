#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
    float input, average = 0;
    
    for(int i =0;i<5;i++){
        scanf("%f",&input);
        average = (average*i+input)/(i+1);
        printf("%f\n",average);
    }

    system("pause");
    return 0;
}