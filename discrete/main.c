#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int x = 2;

    for (x; x < 4; x++) {
        printf("*");
        for (int y = x; y < 3; y++) {
            printf("/");
        }
    }
    return 0;
}
