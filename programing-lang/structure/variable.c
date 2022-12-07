#include <malloc.h>
#include <stdio.h>

int main() {
    double *d = malloc(202);
    printf("%d", d);
    return 0;
}