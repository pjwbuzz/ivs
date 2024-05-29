#include <stdio.h>
int main() {
    int a=1;
    int b=2;
    int* pointer = &a;
    printf("a변수 주소 : %p\t값:%d\n",&a,a);
    printf("b변수 주소 : %p\t값:%d\n",&b,b);
    *pointer *= 3; //*pointer = *pointer * 3
    pointer = &b;
    *pointer *= 3;
    printf("pointer변수가 가리키는 주소:%p\t값:%d\n",pointer,*pointer);
    printf("a변수 주소 : %p\t값:%d\n",&a,a);    
    printf("b변수 주소 : %p\t값:%d\n",&b,b);

}