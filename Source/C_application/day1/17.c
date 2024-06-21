#include <stdio.h>

int main(){ 
    double diffPercent=1;
    for(int i=1;diffPercent>0.5;i++){
        diffPercent = 1;
        for(int j = 0;j<i;j++){
            diffPercent = diffPercent * (1-(double)j/365);
        }
        printf("Person : %d\tdiffPercent : %f\n",i,diffPercent);
    }
}