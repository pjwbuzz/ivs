#include <stdio.h>
void modifyValue(int *value) {
int tempvalue = 10;
*value = tempvalue; // 전달된 value 값을 변경
}
int main() {
int num = 5;
printf("변경 전: %d\n", num);
modifyValue(&num); // 함수에 값을 전달
printf("변경 후: %d\n", num);
return 0;
}         