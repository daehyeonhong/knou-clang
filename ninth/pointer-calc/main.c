#include <stdio.h>

void main() {
    int *p, a[] = {10, 20, 30, 40, 05};
    p = &a[0];
    printf("*p      == %d\n", *p);
    printf("*p++    == %d\n", *p++);
    printf("*++p    == %d\n", *++p);
    p = p + 2;
    printf("*p      == %d\n", *p);
    printf("a[2]    == %d\n", a[2]);
    printf("*p+2    == %d\n", *p + 2);
}
