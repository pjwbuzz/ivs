#include <stdio.h>
int main(){
    int arr[3] = {10,20,30};
    for(int idx=0 ; idx<3 ; idx++){
        printf("�迭 arr[%d] = %d\n", idx, arr[idx]);
    }
    int* ptr = arr;
    for(int idx=0 ; idx<3 ; idx++){
        printf("�迭 ptr[%d] = %d\n", idx, ptr[idx]);
    }
    ptr[0] = 99; ptr[1]=88; ptr[2]=77;
    
    printf("===== ptr ������ =====\n");
    for(int idx=0 ; idx<3 ; idx++){
        printf("�迭 arr[%d] = %d\n", idx, *(arr+idx));  //����Ʈ�ε� �迭ó�� �＼��
    }
    for(int idx=0 ; idx<3 ; idx++){
        printf("�迭 ptr[%d] = %d\n", idx, ptr[idx]);  //�迭�ε� ����Ʈó�� �＼��
    }
}  //����Ʈ�� �迭�� ����..!