#include <stdio.h>
#include <string.h>
int main(){
    int i=10;
    int j=i;
    i=99;
    printf("i=%d\tj=%d\n",i,j);  //�翬�� �̷��� �����Ѵ�� ���������, �ٲ�������
    
    char* str1 = "Hello"; //���ڿ��� �����ͺ����� //str1�� �ּҰ� -> �ش��ּҿ� Hello\0 ����
    //char* str2 = str1; //�̹��� str2��� ������ �������, str2�� str1�� point
    //str1�� �ּҸ� str2�� �Ҵ� (���� ����)
    char* str2;
    strcpy(str2, str1); //str1�� ���ڿ��� str2�� ���� ����
    str1 = "hi";  //str1�� ���ڿ��� �ٲ�� str1�� ���� ���� ������ ���ο� ������ ���ڿ� ����

    printf("str1=%s\tstr2=%s\n",str1,str2);
    
}