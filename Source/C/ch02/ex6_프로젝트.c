#include <stdio.h>

int main(void) {
	char name[100];
	char gender[10];
	int korean, english, math = 0;
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name,(unsigned)sizeof(name));
	printf("������ �Է��ϼ��� (��/��) : ");
	scanf_s("%s", gender,(unsigned)sizeof(gender));
	printf("���� ���� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &korean, &english, &math);
	printf("\n--- �л����� ---\n");
	printf("�̸� : %s \n���� : %s", name, gender);
	printf("\n���� = %d \n���� = %d \n���� = %d\n", korean, english, math);
	printf("�հ� = %d \n��� = %.2lf\n", (korean + english + math), (korean + english + math) / 3.0);
}