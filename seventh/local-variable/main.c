#include <stdio.h>

void main() {
    int x = 2, y = 4;
    printf("A: x=%d, y=%d\n", x, y);
    {
        int x;
        x = 5;
        y++;
        printf("B: x=%d, y=%d\n", x, y);
    }
    printf("A: x=%d, y=%d\n", x, y);
}
