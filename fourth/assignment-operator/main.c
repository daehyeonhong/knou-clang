#include <stdio.h>

int main() {
    int a = 10, b = 3, c = 1;
    a *= (b - 1);
    b /= 2 + 3;
    c += 2;
    printf("a=%d b=%d c=%d", a, b, c);
    return 0;
}
