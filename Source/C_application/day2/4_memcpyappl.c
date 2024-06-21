#include <stdio.h>
#include <string.h>
int main() {
int rows = 3; // 행 수
int cols = 4; // 열 수
// 원본
int source[3][4] = {
{1, 2, 3, 4},
{5, 6, 7, 8},
{9, 10, 11, 12}
};
// 대상
int destination[3][4];
// 데이터 복사
memcpy(destination,source, sizeof(source));
// 복사된 데이터 출력
printf("copied data:\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
printf("%d ", destination[i][j]);
}
printf("\n");
}
return 0;
}