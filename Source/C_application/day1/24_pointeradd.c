#include <stdio.h>
#include <stdlib.h>
int main() {
int numArr[3][4] = {
{ 11, 22, 33, 44 },
{ 55, 66, 77, 88 },
{ 99, 110, 121, 132 }
};
int(*numPtr)[4] = numArr;
int *numPtr2 = &numArr[0][0];
printf("%d\n", *(numPtr+1)[0]);
printf("%d\n", *(numPtr2+1));
system("pause");
return 0; }