#include <stdio.h>
int main(){
    int a=1, b=100;
    int tot = 0;
    for(int i = a; i<=b ; i++){
        tot += i;
    }
    printf("%d���� %d���� �������� %d�Դϴ�.", a,b,tot);
    a = 10; b = 100;
    tot = 0;
}