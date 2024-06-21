#include <stdio.h>
#include <stdint.h>
uint8_t addOne(uint8_t value) {
    return value + 1;
}

int main() {
    typedef uint8_t (*FP_uint8_t_uint8_t)(uint8_t);
    FP_uint8_t_uint8_t myFunctionPointer = addOne;
    uint8_t result = myFunctionPointer(5);
    printf("Result: %u\n", result);
    return 0;
}
