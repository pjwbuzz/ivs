#include <stdio.h>
void swap_addr(int* a, int* b);  //함수(call by reference) 선언

int main() {
    int a=10, b=20;
    printf("swap_addr() 호출 전 a주소:%p, a값:%d, b주소:%p, b값:%d\n",&a,a,&b,b);
    swap_addr(&a,&b); //swap_addr 함수 호출 
    printf("swap_addr() 호출 후 a주소:%p, a값:%d, b주소:%p, b값:%d\n",&a,a,&b,b);

}
//함수 구현(==정의)
void swap_addr(int* a, int* b){
    printf("함수 안에서의 a주소:%p, a값:%d, b주소:%p, b값:%d\n",&a,a,&b,b);
    int temp = *a;
    *a=*b;
    *b=temp;   /*여기서 *a *b가 아니고 a,b로 스왑을 하면 함수안에서는 바뀌는데 전달이안됨
    a,b가 지역변수기 때문에 a,b가 값으로 가지고있는 바꿀변수의 주소값이 스왑되지만 전달은 안됨 */
    printf("함수 안에서의 a주소:%p, a값:%d, b주소:%p, b값:%d\n",&a,a,&b,b);
}