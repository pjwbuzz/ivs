#include <stdio.h>
/*
    ����ü : ���� ������ �����͸� �ϳ��� ���� �ڷ������� ����� ���� ����
    main�Լ����� ���� ���ؼ��� main �Լ� ���� ������ �ؾ���
*/
struct student{      //����ü�� ���� 
    int num;        // �й�(student ����ü ���)
    double grade;   // ����(student ����ü ���)
};



int main(){
    int i;
    struct student s1;
    i=1;
    s1.num = 101;
    s1.grade = 4.43;
    printf("�й� = %d, ���� = %.2lf\n", s1.num, s1.grade);
    
}