#include <stdio.h>
#include <string.h>
int main() {
int arr[10];
// 배열을 3으로 초기화
memset(arr, 3, sizeof(arr));
// 초기화된 배열의 내용 출력
for (int i = 0; i < 10; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}
