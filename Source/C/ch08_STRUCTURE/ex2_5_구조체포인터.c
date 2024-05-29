#include <stdio.h>
struct GameInfo{  //대문자로 하면 tyfedef 없이 바로 형식지정 가능, 주로 새로운 형식은 이렇게 하는 경향
    char* name;
    int year;
    int price;
};

int main() {
    struct GameInfo gameInfo1;
    gameInfo1.name = "사이버C";
    gameInfo1.year = 2024;
    gameInfo1.price = 33000;  //변수 하나 생겨남
    struct GameInfo* gamePtr1 = &gameInfo1;
    printf("게임정보(gameInfo1) 출력\n");
    printf("게임이름 : %s\n", gameInfo1.name);
    printf("출시년도 : %d\n", gameInfo1.year);
    printf("게임가격 : %d\n", gameInfo1.price);
    
    printf("게임정보(gamePtr포인터변수) 출력\n");
    printf("게임이름 : %s\n", (*gamePtr1).name);  //반드시 괄호 쳐야함 .보다 *가 우선순위가 낮음
    printf("출시년도 : %d\n", (*gamePtr1).year);
    printf("게임가격 : %d\n", (*gamePtr1).price);

    printf("게임정보(gamePtr포인터변수) 출력\n");
    printf("게임이름 : %s\n", gamePtr1->name);   //구조체변수면 이렇게 더많이함
    printf("출시년도 : %d\n", gamePtr1->year);
    printf("게임가격 : %d\n", gamePtr1->price);
    
}