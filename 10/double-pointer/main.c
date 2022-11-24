#include <stdio.h>

int main() {
    char a = 'A', *p, **pp;
    p = &a;
    pp = &p;
    printf("**pp=%c", **pp);
    return 0;
}
