#include <stdio.h>
//배열(array) : 동일 자료형의 집합 -> 반드시 자료형이 같아야함, 배열의 크기를 수정불가...
int main(){
    // 배열 선언과 초기화를 한번에
    // 배열의 크기를 생략하면, 데이터 개수에 맞게 배열생성
    // 배열의 크기를 생략하지 않으면, 그 방 개수만큼 메모리가 잡히고 
    int subway[] = {30,40,50};  // 앞에부터 데이터가 찬 뒤에 나머지는 0으로 초기화
    for(int idx=0 ; idx<3 ; idx++){
        printf("subway[%d]=%d\n", idx, subway[idx]);
    }
}