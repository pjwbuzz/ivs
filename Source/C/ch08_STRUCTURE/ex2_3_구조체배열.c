#include <stdio.h>
struct student {
    int id;         // �й�
    char name[20];  // �̸� char* name
    double grade;   // ����
};
void stPrint(struct student st); // �Լ� ���� �Ű������� structure�� �ް�, return�� ����

int main() { 
    //����ü ���� ����� �ʱ�ȭ
    struct student sArr[3] = {  {101, "ȫ�浿", 4.43},
                                {102, "��μ�", 3.23}, 
                                {103, "������", 4.21}};
    printf("�й�\t�̸�\t����\n");
    for(int idx = 0; idx<3 ; idx++){
       // printf("%d\t%s\t%.2lf\n", sArr[idx].id,sArr[idx].name, sArr[idx].grade); //sArr�� ��������
       stPrint(sArr[idx]); // �Լ� ȣ�� 
    }//for

}//main
void stPrint(struct student st){
    printf("%d\t%s\t%.2lf\n", st.id,st.name,st.grade);
}