#include <stdio.h>
#define SWE_EN_BIT 7
#define BR_BIT 0

int main() {
unsigned char registerValue = 0;
registerValue |= (1<<SWE_EN_BIT);
registerValue |= (4<<BR_BIT);
for (int i = 7; i >= 0; i--) {
    printf("%d", (registerValue & (1 << i)) ? 1 : 0);
}
printf("\n");
return 0;
}
