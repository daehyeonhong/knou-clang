#include <stdio.h>

void main() {
    int a = 10;
    static int b = 20;
    {
        int a = 5;
        printf("a = %d b = %d\n", a, b);
    }
    printf("a = %d b = %d\n", a, b);
}
