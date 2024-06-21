#include <stdio.h>
typedef struct {
char c; // 1 바이트
double d; // 8 바이트
int i; // 4 바이트

} Dest;
int main() {
Dest destination;
printf("sizeof(destination) = %u\n", sizeof(destination));
return 0;
}