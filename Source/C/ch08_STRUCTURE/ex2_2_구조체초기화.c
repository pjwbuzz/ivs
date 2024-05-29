#include <stdio.h>
/*
    구조체 : 여러 형태의 데이터를 하나의 단일 자료형으로 만드는 것이 목적
    main함수에서 쓰기 위해서는 main 함수 위에 선언을 해야함
*/
struct student{      //구조체를 정의 
    int num;        // 학번(student 구조체 멤버)
    double grade;   // 학점(student 구조체 멤버)
};



int main(){
    int i=1;
    struct student s1 = {101,4.43}; //배열처럼 초기화 하면 됨, but 순서는 반드시 지켜야함
    printf("학번 = %d, 학점 = %.2lf\n", s1.num, s1.grade);
    
}