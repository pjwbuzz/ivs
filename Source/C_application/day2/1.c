#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void do_ccp(uint32_t address, uint32_t command, uint32_t value){
    if(command == 1){
         *((uint8_t*)address) = value;}
    else if (command ==2) {
        *((uint16_t*)address) = value;
    }
    else if (command == 3){
        *((uint32_t*)address) = value;
    }
    else if (command == 4){
        *((int8_t*)address) = value;
    }
    else if (command == 5){
        *((int16_t*)address) = value;
    }
    else if (command == 6){
        *((int32_t*)address) = value;
    }
}


int main() {
uint8_t u8 = 0;
uint16_t u16 = 0;
uint32_t u32 = 0;
int8_t s8 = 0;
int16_t s16 = 0;
int32_t s32 = 0;
printf("u8:%d, u16:%d, u32:%d, s8:%d, s16:%d, s32:%d\n", &u8, &u16, &u32, &s8, &s16, &s32);
uint32_t address, command, value;

do{
    scanf("%d %d %d",&address,&command,&value);
    do_ccp(address,command,value);
    printf("u8:%d, u16:%d, u32:%d, s8:%d, s16:%d, s32:%d\n", u8, u16, u32, s8, s16, s32);
    }
while(command!=0);

return 0;
}
