#include <stdio.h>

void fcn1();

void main() {
    int i = 10;
    printf("\n main i = %d", i);
    fcn1();
    printf("\n main i = %d", i);
}

void fcn1() {
    int i;
    i = 20;
    printf("\n fcn1 i = %d", i);
}
