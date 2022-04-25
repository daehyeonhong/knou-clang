#include <stdio.h>

#define Hap1(x, y) x+y;
#define Hap2(x, y) ((x)+(y));
#define Gop1(x, y) x*y;
#define Gop2(x, y) ((x)*(y));

void main() {
    int h1, h2, g1, g2;
    h1 = 10 * Hap1(3, 4);
    h2 = 10 * Hap2(3, 4);
    g1 = 10 * Gop1(1 + 2, 3 + 4);
    g2 = 10 * Gop2(1 + 2, 3 + 4);

    printf("h1=%d, h2=%d\n", h1, h2);
    printf("g1=%d, g2=%d\n", g1, g2);
}
