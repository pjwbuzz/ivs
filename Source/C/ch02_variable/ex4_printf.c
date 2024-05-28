//#include <stdio.h>
///* 서식 지정자 : %d, %f, %.3lf, %c, %s
//*/
//int main() {
//	int num1 = 10;
//	int num2 = 11;
//	printf("두 수의 합 = %d\n", num1 + num2);
//	// 정수형(4byte)과 정수형(4byte) 사칙연산 결과는 정수형4byte
//	printf("두 수의 평균 = %.1lf\n", (num1 + num2) / 2.0);
//	//num1, num2, 2 셋중 하나라도 실수형이어야 결과값이 나옴, 정수정수정수로 하면 결과값이 0이 나옴..!!
//	printf("두 수의 평균 = %.1lf\n", ((double)num1 + num2) / 2);  //이렇게 강제형변환을 해도 됨
//	printf("두 수의 평균 = %.1lf\n", (double)(num1 + num2) / 2);
//}