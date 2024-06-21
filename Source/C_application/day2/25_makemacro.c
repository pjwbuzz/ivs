#include <stdio.h>
#define SET_BIT(var, pos) (var|(1<<pos))
#define CLEAR_BIT(var,pos) (var&(~(1<<pos)))
#define TOGGLE_BIT(var,pos) (var^(1<<pos))

int main() {
int num1 = 10;
int num2 = 3;
int set_result = SET_BIT(num1, num2);
int clear_result = CLEAR_BIT(num1, num2);
int toggle_result = TOGGLE_BIT(num1, num2);
printf("var: %d\n", num1);
printf("pos: %d\n", num2);
printf("setbit: %d\n", set_result);
printf("clearbit: %d\n", clear_result);
printf("togglebit: %d\n", toggle_result);
return 0;
}