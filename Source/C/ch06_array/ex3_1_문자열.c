#include <stdio.h>
int main() {
    //char* name = "jenny";  //문자를 넣으면 인접하게 잡힘[ j e n n y \0 ]
    char name[] = "jenny";
    for(int idx=0 ; idx<6 ; idx++){
        printf("index : %d : 글자 : %c\n",idx,name[idx]);
    }
}