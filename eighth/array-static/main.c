#include <stdio.h>

int main() {
    static int x[] = {1, 2, 3, 4};
    static int y[] = {10, 20, 30, 40};
    int i, z[4];
    for (i = 0; i < 4; ++i) z[i] = x[i] + y[3 - i];
    printf("반대 위치의 배열 요소 합\n");
    for (i = 0; i < 4; ++i) printf("%d + %d = %d\n", x[i], y[3 - i], z[i]);
}
