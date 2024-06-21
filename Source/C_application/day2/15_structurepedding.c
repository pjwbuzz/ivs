#include <stdio.h>
typedef struct {
char c_1; // 1 바이트
int i_1; // 4 바이트
int i_2; // 4 바이트
} Dest;
int main() {
Dest destination;
printf("sizeof(destination) = %u\n", sizeof(destination));
return 0;
}
