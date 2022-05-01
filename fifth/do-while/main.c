#include <stdio.h>

#pragma warning(disable:4996)

int main() {
    int i = 0;
    int n;
    int sum = 0;
    printf("n=?");
    scanf("%d", &n);
    do {
        sum += i;
        i++;
    } while (i <= n);
    printf("i=%d\n", i);
    printf("i~%d sum result=%d\n", n, sum);
    return 0;
}
