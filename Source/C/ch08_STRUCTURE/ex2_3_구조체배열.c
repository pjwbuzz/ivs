#include <stdio.h>
struct student {
    int id;         // 학번
    char name[20];  // 이름 char* name
    double grade;   // 학점
};
void stPrint(struct student st); // 함수 선언 매개변수로 structure를 받고, return도 가능

int main() { 
    //구조체 변수 선언과 초기화
    struct student sArr[3] = {  {101, "홍길동", 4.43},
                                {102, "김민수", 3.23}, 
                                {103, "주혜지", 4.21}};
    printf("학번\t이름\t학점\n");
    for(int idx = 0; idx<3 ; idx++){
       // printf("%d\t%s\t%.2lf\n", sArr[idx].id,sArr[idx].name, sArr[idx].grade); //sArr도 포인터임
       stPrint(sArr[idx]); // 함수 호출 
    }//for

}//main
void stPrint(struct student st){
    printf("%d\t%s\t%.2lf\n", st.id,st.name,st.grade);
}