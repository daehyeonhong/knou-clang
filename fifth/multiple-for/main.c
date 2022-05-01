#include <stdio.h>

int main() {
    for (int a = 1; a <= 3; ++a) {
        printf("a=%d\n", a);
        for (int b = 0; b <= 4; b++) printf("b=%d\n", b);
        putchar('\n');
    }
    return 0;
}
