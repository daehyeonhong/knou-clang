#include <stdio.h>

test();

void main() {
    int i;
    i = 0;
    while (i < 3) {
        test();
        i++;
    }
}

test() {
    auto int a = 0;
    static int s = 0;
    printf("auto=%d, static=%d\n", a, s);
    ++a;
    ++s;
}
