#include <stdio.h>
#include <string.h>
int main(){
    int i=10;
    int j=i;
    i=99;
    printf("i=%d\tj=%d\n",i,j);  //당연히 이러면 생각한대로 결과가나옴, 바뀌지않음
    
    char* str1 = "Hello"; //문자열은 포인터변수임 //str1에 주소값 -> 해당주소에 Hello\0 존재
    //char* str2 = str1; //이번엔 str2라는 변수가 만들어짐, str2도 str1을 point
    //str1의 주소를 str2에 할당 (얕은 복사)
    char* str2;
    strcpy(str2, str1); //str1의 문자열을 str2에 깊은 복사
    str1 = "hi";  //str1의 문자열이 바뀌면 str1의 기존 문자 버리고 새로운 공간에 문자열 저장

    printf("str1=%s\tstr2=%s\n",str1,str2);
    
}