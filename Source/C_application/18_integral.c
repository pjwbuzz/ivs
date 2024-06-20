#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double integral(double A, double B, double D, double N){
    double sum = 0;
    for(int k=1;k<=N;k++){
    sum += pow(A+k*(B-A)/N,D);
    }
    return (B-A)*sum/N;
}

int main() {
    printf("%lf\n", integral(0,2,2,1000));
    printf("%lf\n", integral(0,2,3,1000));
    system("pause");
    return 0;
}