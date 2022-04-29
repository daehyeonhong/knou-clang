#include <stdio.h>

#pragma warning(disable:4996)

int main() {
    int a;
    int b;
    int max;
    scanf("%d %d", &a, &b);
    if (a > b) max = a;
    else max = b;
    printf("max=%d\n", max);
    return 0;
}
