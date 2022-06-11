#include <stdio.h>

void swap(int *x, int *y);

void main() {
    int a = 3, b = 5;
    printf("before call a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("after call a=%d, b=%d\n", a, b);
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("in function x=%d, y=%d\n", *x, *y);
}
