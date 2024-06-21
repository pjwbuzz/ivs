#include <stdio.h>
#include <string.h>
int main() {
int arr1[] = {2};
int arr2[] = {1, 2, 3, 4, 6};
int arr3[] = {1, 2, 3, 4, 5};
// 배열 arr1과 arr2 비교
int cmp_result1 = memcmp(arr1, arr2, sizeof(arr2));
if (cmp_result1 == 0) {
printf("arr1과 arr2는 같습니다.\n");
} else {
printf("arr1과 arr2는 다릅니다.\n"); }
// 배열 arr1과 arr3 비교
int cmp_result2 = memcmp(arr1, arr3, sizeof(arr1));
if (cmp_result2 == 0) {
printf("arr1과 arr3는 같습니다.\n");
} else {
printf("arr1과 arr3는 다릅니다.\n"); }
return 0; 
}