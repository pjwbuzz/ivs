#include <stdio.h>
// void changeArray(int a[3]);
void changeArray(int* a);  //�̷����ص���, �̷��� �迭ũ�� �����ص� �ż� ����
int main() {
    int arr[] = {10,20,30};
    changeArray(arr);
    for(int idx=0;idx<3;idx++){
        printf("arr[%d] = %d\n",idx,*(arr+idx));
        
    }
}
void changeArray(int* ptr){
    ptr[1] = 99;
    // *(ptr+1) = 99; //�̰ŵ���
}