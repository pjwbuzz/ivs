#include <stdio.h>
void line(int cnt); //�Լ����� (��ȯ���� ���� �Լ�)
//void line(); ���� �̸��� �Լ� ���� �Ұ�
void noArg(); //�Լ� ���� (�Ű������� ���� �Լ�)

int main(){
    line(40); // �Լ� ȣ�� 
    noArg();
    line(50);
}
void line(int cnt){
    for(int i=0;i<cnt;i++){
        printf("=");
    }
    printf("\n");
}
void noArg(){
    printf("��ȯ���� �Ű������� ���� �Լ� \n");
}