#include <stdio.h>
// static int count = 0;
int count = 0;
// static void print3()
void print3()
{
count++;
printf("print3 : %d\n", count);
}
int main()
{
print1();
print1();
print1();
print2();
print2();
print2();
print3();
print3();
print3();
print3();
printf("count :%d\n", count);
system("pause");
return 0;
}