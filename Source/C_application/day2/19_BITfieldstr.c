#include <stdio.h>
#include <stdint.h>
typedef struct {
unsigned int BR : 3;
unsigned int Reseved : 1;
unsigned int BR_RATIO : 2;
unsigned int Reserved : 1;
unsigned int SWK_EN : 1;
} BitFieldData;

int main() {
BitFieldData data;
uint8_t target;
memcpy(&target,&data,sizeof(target));
for (int i = 7; i >= 0; i--) {
printf("%d", (target & (1 << i)) ? 1 : 0);
}
return 0;
}