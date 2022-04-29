#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    if (a > b) {
        a += 20;
        printf("a=%d\n", a);
    }
    b += 20;
    printf("b=%d\n", b);
}
