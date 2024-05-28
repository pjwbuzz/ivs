#include <stdio.h>
//Call by value vs call by reference
void sum(int from, int to, int* tot);  //from,to 는 int값이있고,  tot는 해당하는 주소에 int 값이 있다.
int main(void){
    int a = 1, b = 10, tot;
    sum(a,b,&tot);
    a = 10; b = 100;
    printf("%d부터 %d까지 누적합은 %d\n",a,b,tot);
}

void sum(int from, int to, int* tot){
    *tot = 0;
    for(int i = from ; i<=to ;i++){
        *tot += i;
    }
}