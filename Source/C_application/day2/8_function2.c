#include <stdio.h>
#include <stdlib.h>
int func1(int *var) {
    int temp;
    *var = *var + 1;
    temp = *var;
    return temp; 
}
int main() {
    int iPtr;
    iPtr = 1;
    printf("%d\n", iPtr);
    printf("%d\n", func1(&iPtr));
    printf("%d\n", iPtr);
    system("pause");
    return 0; 
}