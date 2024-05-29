#include <stdio.h>
void swap(int a, int b);  //함수 선언

int main() {
    int a=10, b=20;
    printf("swap() 호출 전 a주소:%p, a값:%d, b주소:%p, b값:%d\n",&a,a,&b,b);
    swap(a,b); //swap 함수 호출 
    printf("swap() 호출 후 a주소:%p, a값:%d, b주소:%p, b값:%d\n",&a,a,&b,b);

}
//함수 구현(==정의)
void swap(int a, int b){
    printf("함수 안에서의 a주소:%p, a값:%d, b주소:%p, b값:%d\n",&a,a,&b,b);
    int temp = a;
    a=b;
    b=temp;
    printf("함수 안에서의 a주소:%p, a값:%d, b주소:%p, b값:%d\n",&a,a,&b,b);
    //이러면 call by value , 함수 호출 이후에 값은 바뀌지 않음...
}