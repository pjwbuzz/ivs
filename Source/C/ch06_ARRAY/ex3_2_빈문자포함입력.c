#include <stdio.h>
//�̸�(���� ������), �ּ�(��������)�� �Է¹ޱ�
/*scanf("%s",����,�Է¹���byte��)
    ��,�����̽�,���� �� whitespace�� ���� �� ������ ���� ������ return, �� �Ǿտ� ������ ws�� ����
    -> ����� ����� �Ұ�������
    gets(����) : ��� ������ \n���� ������, \n���������� return�ϰ� �� �ڴ� ���ۿ��� �����!!
*/
int main(){
    // char* name; //�Է¹��� ���ڿ��� ����� ������ Ȯ������ ����, �ּҰ� �� �غ� �� ����
    char name[128];
    char address[512];  //�˳��ϰ� ��������
    printf("�̸� >>");
    scanf("%s",name,sizeof(name));
    printf("�ּ� >>");
    // scanf("%s",address,sizeof(address));
    //gets�� �Ѱ��� ���� scanf ���� ���ۿ� \n�� �� �տ� ���Ƽ� �׳� �Ѿ�Ե�.
    gets(address);  //���۸� ����� �뵵, gets�� ���� ������ ���¸� �� �˾ƾ���
    gets(address);
    printf("�Է��� �̸� : %s\n",name);
    printf("�Է��� �ּ� : %s\n",address);

}