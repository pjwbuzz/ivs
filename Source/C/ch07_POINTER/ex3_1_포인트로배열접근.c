#include <stdio.h>
int main(){
    int arr[3] = {10,20,30};
    for(int idx=0 ; idx<3 ; idx++){
        printf("배열 arr[%d] = %d\n", idx, arr[idx]);
    }
    int* ptr = arr;
    for(int idx=0 ; idx<3 ; idx++){
        printf("배열 ptr[%d] = %d\n", idx, ptr[idx]);
    }
    ptr[0] = 99; ptr[1]=88; ptr[2]=77;
    
    printf("===== ptr 수정후 =====\n");
    for(int idx=0 ; idx<3 ; idx++){
        printf("배열 arr[%d] = %d\n", idx, *(arr+idx));  //포인트인데 배열처럼 억세스
    }
    for(int idx=0 ; idx<3 ; idx++){
        printf("배열 ptr[%d] = %d\n", idx, ptr[idx]);  //배열인데 포인트처럼 억세스
    }
}  //포인트와 배열은 같다..!