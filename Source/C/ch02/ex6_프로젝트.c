#include <stdio.h>

int main(void) {
	char name[100];
	char gender[10];
	int korean, english, math = 0;
	printf("이름을 입력하세요 : ");
	scanf_s("%s", name,(unsigned)sizeof(name));
	printf("성별을 입력하세요 (남/여) : ");
	scanf_s("%s", gender,(unsigned)sizeof(gender));
	printf("국어 영어 수학 점수를 입력하세요 : ");
	scanf_s("%d %d %d", &korean, &english, &math);
	printf("\n--- 학생정보 ---\n");
	printf("이름 : %s \n성별 : %s", name, gender);
	printf("\n국어 = %d \n영어 = %d \n수학 = %d\n", korean, english, math);
	printf("합계 = %d \n평균 = %.2lf\n", (korean + english + math), (korean + english + math) / 3.0);
}