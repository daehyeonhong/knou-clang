#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);
    do {
        c = a % b;
        a = b;
        b = c;
    } while (b > 0);
    printf("gcd: %d\n", a);
    return 0;
}
