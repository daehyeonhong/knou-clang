#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double x = 12.34;
    int i = -5;
    int j = 2;
    int a;
    int b;
    int c;
    a = ceil(x);
    b = floor(x);
    c = pow(4, j);
    printf("abs(-5)=%d\n", abs(i));
    printf("ceil(12.34=%d\n", a);
    printf("cos(10)=%f\n", cos(10));
    printf("exp(2)=%.f\n", exp(j));
    printf("floor(12.34)=%d\n", b);
    printf("sqrt(2)=%5f\n", sqrt(j));
    printf("pow(4,2)=%d\n", c);
    return 0;
}
