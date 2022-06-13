#include <stdio.h>

void main() {
    register int i;
    int sum = 0;
    for (i = 0; i <= 10; ++i)
        sum += i;
    i -= 1;
    printf("i = %d sum = %d", i, sum);
}
