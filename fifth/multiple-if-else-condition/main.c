#include <stdio.h>

#pragma warning(disable:4996)

int main() {
    int a;
    scanf("%d", &a);
    if (a >= 0) {
        if (a == 0) {
            printf("input value is zero");
        } else printf("input value is positive number");
    } else printf("input value is negative number");
    return 0;
}
