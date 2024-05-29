#include <stdio.h>
int* returnArray(int* ptr);   //int[3] 이런식으로 배열 return은 안되고, 포인터return을 해야함
int main() {
    int arr[] = {10,20,30};
    int* afterArr = returnArray(arr);   
    printf("수정전 : ");
    for(int idx=0;idx<3;idx++){
        printf("arr[%d] = %d\t",idx,arr[idx]);
    }
    printf("\n수정후 : ");
    for(int idx=0;idx<3;idx++){
        printf("afterArr[%d] = %d\t",idx,afterArr[idx]);
    }

}
int* returnArray(int* ptr){
    static int resultArr[3];  //이 함수가 호출된 이후 사라질때 정적으로 메모리에 남으라는 의미
    for(int idx=0; idx<3; idx++){
        resultArr[idx] = ptr[idx];    //깊은복사 
    }
    resultArr[1] = 99;
    return resultArr;
}