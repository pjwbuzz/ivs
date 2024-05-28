#include <stdio.h>
int main(){
    int floor;
    printf("몇층을 원하시나요? >>");
    scanf("%d",&floor);
    for(int i=1;i<=floor;i++){
        for(int j=1;j<=(floor-i);j++) {printf(" ");}
        for(int j=1;j<=(2*i-1);j++) {printf("*");}
        printf("\n");
        // for(int j=1;j<=(floor-i);j++) {printf(" ");}
        // printf("\n");
    }
}