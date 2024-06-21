#include <stdio.h>
#include <string.h>
int main() {
int source[10] = {1,2,3,4,5,6,7,8,9,10}; // 원본
int destination[10]; // 대상
// memcpy를 사용하여 데이터 복사
memcpy(destination, source,sizeof(source));
for (int i = 0; i < 10; i++) {
printf("%d ", destination[i]);
}
printf("\n");
return 0;
}