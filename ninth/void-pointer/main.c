#include <stdio.h>

void main() {
    int a = 100;
    char b = 'b';
    void *p = NULL;
    p = (int *) &a;
    printf("*p=%d\n", *(int *) p);
    p = (char *) &b;
    printf("*p=%c\n", *(char *) p);
}
