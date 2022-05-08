#include <stdio.h>

int sum(int a, int b);

int main() {
    int x, y, c;
    scanf("%d %d", &x, &y);
    c = sum(10, 20);
    printf("%d", c);
    return 0;
}

int sum(int a, int b) {
    int d;
    d = a + b;
    return (d);
}
