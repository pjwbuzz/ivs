#include <stdio.h>
int main(void){
    int j=1;
    // for(int i=1 ; i<=j ; j++){
    //     printf("%d",i);
    // }
    
    //for(int i=1 ;; j++)

    while(1){
        printf("%d",j++);
        if(j==5){
            break;
        }
    }
}