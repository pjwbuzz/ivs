#include <stdio.h>
void swap_addr(int* a, int* b);  //�Լ�(call by reference) ����

int main() {
    int a=10, b=20;
    printf("swap_addr() ȣ�� �� a�ּ�:%p, a��:%d, b�ּ�:%p, b��:%d\n",&a,a,&b,b);
    swap_addr(&a,&b); //swap_addr �Լ� ȣ�� 
    printf("swap_addr() ȣ�� �� a�ּ�:%p, a��:%d, b�ּ�:%p, b��:%d\n",&a,a,&b,b);

}
//�Լ� ����(==����)
void swap_addr(int* a, int* b){
    printf("�Լ� �ȿ����� a�ּ�:%p, a��:%d, b�ּ�:%p, b��:%d\n",&a,a,&b,b);
    int temp = *a;
    *a=*b;
    *b=temp;   /*���⼭ *a *b�� �ƴϰ� a,b�� ������ �ϸ� �Լ��ȿ����� �ٲ�µ� �����̾ȵ�
    a,b�� ���������� ������ a,b�� ������ �������ִ� �ٲܺ����� �ּҰ��� ���ҵ����� ������ �ȵ� */
    printf("�Լ� �ȿ����� a�ּ�:%p, a��:%d, b�ּ�:%p, b��:%d\n",&a,a,&b,b);
}