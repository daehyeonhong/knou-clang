#include <stdio.h>

int main() {
    int x = 5;
    int a = ++x * x--;
    int b = x * 10;
    printf("a=%d b=%d x=%d", a, b, x);
}
