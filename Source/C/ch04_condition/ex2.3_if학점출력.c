#include <stdio.h>
//score�� �Է¹޾� ���� ���
int main(){
    int score;
    printf("������ >> ");
    scanf("%d", &score);
    if(90<=score && score<= 100){
        printf("A����");
    }else if(80<=score && score<90){
        printf("B����");
    }else if(70<=score && score<80){
        printf("C����");
    }else if(60<=score && score<70){
        printf("D����");
    }else if(0<=score && score<60){
        printf("F����");
    }else{
        printf("��ȿ���� �ʴ� �����Դϴ�.");
    }
    
}