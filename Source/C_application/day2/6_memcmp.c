#include <stdio.h>
#include <string.h>
int main() {
int arr1[] = {2};
int arr2[] = {1, 2, 3, 4, 6};
int arr3[] = {1, 2, 3, 4, 5};
// �迭 arr1�� arr2 ��
int cmp_result1 = memcmp(arr1, arr2, sizeof(arr2));
if (cmp_result1 == 0) {
printf("arr1�� arr2�� �����ϴ�.\n");
} else {
printf("arr1�� arr2�� �ٸ��ϴ�.\n"); }
// �迭 arr1�� arr3 ��
int cmp_result2 = memcmp(arr1, arr3, sizeof(arr1));
if (cmp_result2 == 0) {
printf("arr1�� arr3�� �����ϴ�.\n");
} else {
printf("arr1�� arr3�� �ٸ��ϴ�.\n"); }
return 0; 
}