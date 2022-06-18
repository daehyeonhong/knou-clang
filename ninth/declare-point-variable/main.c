#include <stdio.h>

int main() {
    int a, b;
    int *p;
    a = 5000;
    p = &a;
    b = *p;
    printf("a=%d,b=%d,p=%d\n", a, b, p);
    printf("a=%x,b=%x,p=%x\n", a, b, p);
}
