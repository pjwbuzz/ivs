#include <stdio.h>
int main() {
    int a=1;
    int b=2;
    int* pointer = &a;
    printf("a���� �ּ� : %p\t��:%d\n",&a,a);
    printf("b���� �ּ� : %p\t��:%d\n",&b,b);
    *pointer *= 3; //*pointer = *pointer * 3
    pointer = &b;
    *pointer *= 3;
    printf("pointer������ ����Ű�� �ּ�:%p\t��:%d\n",pointer,*pointer);
    printf("a���� �ּ� : %p\t��:%d\n",&a,a);    
    printf("b���� �ּ� : %p\t��:%d\n",&b,b);

}