#include <stdio.h>
struct GameInfo{  //�빮�ڷ� �ϸ� tyfedef ���� �ٷ� �������� ����, �ַ� ���ο� ������ �̷��� �ϴ� ����
    char* name;
    int year;
    int price;
};

int main() {
    struct GameInfo gameInfo1;
    gameInfo1.name = "���̹�C";
    gameInfo1.year = 2024;
    gameInfo1.price = 33000;  //���� �ϳ� ���ܳ�
    struct GameInfo* gamePtr1 = &gameInfo1;
    printf("��������(gameInfo1) ���\n");
    printf("�����̸� : %s\n", gameInfo1.name);
    printf("��ó⵵ : %d\n", gameInfo1.year);
    printf("���Ӱ��� : %d\n", gameInfo1.price);
    
    printf("��������(gamePtr�����ͺ���) ���\n");
    printf("�����̸� : %s\n", (*gamePtr1).name);  //�ݵ�� ��ȣ �ľ��� .���� *�� �켱������ ����
    printf("��ó⵵ : %d\n", (*gamePtr1).year);
    printf("���Ӱ��� : %d\n", (*gamePtr1).price);

    printf("��������(gamePtr�����ͺ���) ���\n");
    printf("�����̸� : %s\n", gamePtr1->name);   //����ü������ �̷��� ��������
    printf("��ó⵵ : %d\n", gamePtr1->year);
    printf("���Ӱ��� : %d\n", gamePtr1->price);
    
}