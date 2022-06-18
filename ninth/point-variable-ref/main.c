#include <stdio.h>

void main() {
    int *p, i = 3, j;
    p = &i;
    j = *p;
    j++;
    printf("*p=%d\n", *p);
    printf("p=%x\n", p);
    printf("j=%d\n", j);
}
