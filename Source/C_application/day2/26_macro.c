#include <stdio.h>
#define FACTORIAL(n) ({ 
    int ans=1;
    for(int i=1,i<=(n),i++){
        ans *=i;}
    ans;
})

int main() {
    int num = 5;
    int factorial_result = FACTORIAL(num);
    printf("%d! = %d\n", num, factorial_result);
    return 0;
}