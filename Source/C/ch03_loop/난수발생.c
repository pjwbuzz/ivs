#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//난수발생전 초기화 작업 필수
//rand() : 0 ~ 32767
int main (void) {
    srand( (unsigned int)time(NULL)); //난수초기화
    //100미만(0~99) 난수 발생하기 위해 나머지연산 사용
    //1~100 난수 사용 위해서는 +1 하면 됨 
    printf("%d\n", rand()%45+1);
    printf("%d\n", rand()%45+1);
    printf("%d\n", rand()%45+1);
    printf("%d\n", rand()%45+1);
    printf("%d\n", rand()%45+1);
    printf("%d\n", rand()%45+1); 


    
}