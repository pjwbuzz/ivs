#include <stdio.h>
int main() {
    //아래 문자열 선언 세가지 방법
    //char* name = "jenny";  //문자를 넣으면 인접하게 잡힘[ j e n n y \0 ]
    char name[] = "jenny"; // char name[] = {'j','e','n','n','y','\0'}  <- 이거랑 같음 (문자배열)
    for(int idx=0 ; idx<6 ; idx++){
        printf("index : %d : 글자 : %c\n",idx,name[idx]);
    }
    printf("%s\n",name);  //레퍼런스 변수, 주소 
}