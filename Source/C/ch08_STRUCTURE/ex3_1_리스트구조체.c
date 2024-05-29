#include <stdio.h>
struct list
{
    int num;
    struct list* next;
};
int main(){
    struct list a = {10, 0}, b = {20,0}, c = {30,0};
    //a를 가리키는 head가 필요함, struct point 변수
    struct list* head = &a;
    struct list* current;
    a.next = &b;
    b.next = &c;
    printf("전체 데이터 : ");
    current = head;
    while(current){
        printf("%d\t", current->num);  //화살표는 포인터연산자
        current = current->next;
    }

}