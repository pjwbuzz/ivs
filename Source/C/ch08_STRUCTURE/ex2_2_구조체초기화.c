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
    int i=1;
    struct student s1 = {101,4.43}; //�迭ó�� �ʱ�ȭ �ϸ� ��, but ������ �ݵ�� ���Ѿ���
    printf("�й� = %d, ���� = %.2lf\n", s1.num, s1.grade);
    
}