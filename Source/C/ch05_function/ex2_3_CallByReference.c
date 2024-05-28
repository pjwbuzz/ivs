#include <stdio.h>
//Call by value vs call by reference
void sum(int from, int to, int* tot);  //from,to �� int�����ְ�,  tot�� �ش��ϴ� �ּҿ� int ���� �ִ�.
int main(void){
    int a = 1, b = 10, tot;
    sum(a,b,&tot);
    a = 10; b = 100;
    printf("%d���� %d���� �������� %d\n",a,b,tot);
}

void sum(int from, int to, int* tot){
    *tot = 0;
    for(int i = from ; i<=to ;i++){
        *tot += i;
    }
}