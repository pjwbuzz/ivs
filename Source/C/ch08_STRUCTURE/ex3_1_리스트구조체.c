#include <stdio.h>
struct list
{
    int num;
    struct list* next;
};
int main(){
    struct list a = {10, 0}, b = {20,0}, c = {30,0};
    //a�� ����Ű�� head�� �ʿ���, struct point ����
    struct list* head = &a;
    struct list* current;
    a.next = &b;
    b.next = &c;
    printf("��ü ������ : ");
    current = head;
    while(current){
        printf("%d\t", current->num);  //ȭ��ǥ�� �����Ϳ�����
        current = current->next;
    }

}