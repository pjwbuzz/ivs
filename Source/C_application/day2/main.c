#include <stdio.h>
#include <stdlib.h>
// extern void print3();
extern int count;
void print1() {
int count = 0;
count++;
printf("print1 : %d\n", count);
}
void print2() {
static int count = 0;
count++;
printf("print2 : %d\n", count);
}