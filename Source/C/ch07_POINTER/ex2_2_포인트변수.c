#include <stdio.h>
int main() {
    int a=1;
    int b=2;
    printf("a���� �ּ� : %p\t��:%d\n",&a,a);
    printf("b���� �ּ� : %p\t��:%d\n",&b,b);
    int* pointer = &a;
    printf("pointer������ ����Ű�� �ּ�:%p\t��:%d\n",pointer,*pointer);
    pointer = &b;
    printf("pointer������ ����Ű�� �ּ�:%p\t��:%d\n",pointer,*pointer);

}