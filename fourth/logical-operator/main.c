#include <stdio.h>

int main() {
    int a = 4, b = 7, c, d, e;
    c = a > 2 && b <= 7;
    printf("c=%d\n", c);
    d = a < 2 || &b <= 7;
    printf("d=%d\n", d);
    e = !a;
    printf("e=%d\n", e);
    return 0;
}
