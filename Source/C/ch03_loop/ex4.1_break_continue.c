#include <stdio.h>
int main() {
    for(int i =1 ; i<=5 ; i++){
        if(i==3){
            break;   //반복문을 탈출
            //continue;//이번 반복을 중단하고 다음 반복으로 넘어감 
            }  
        printf("%d\t", i);
        
    }
}