#include <stdio.h>
int main() {
    //�Ʒ� ���ڿ� ���� ������ ���
    //char* name = "jenny";  //���ڸ� ������ �����ϰ� ����[ j e n n y \0 ]
    char name[] = "jenny"; // char name[] = {'j','e','n','n','y','\0'}  <- �̰Ŷ� ���� (���ڹ迭)
    for(int idx=0 ; idx<6 ; idx++){
        printf("index : %d : ���� : %c\n",idx,name[idx]);
    }
    printf("%s\n",name);  //���۷��� ����, �ּ� 
}