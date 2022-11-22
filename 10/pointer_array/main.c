#include <stdio.h>

int main() {
    char A[] = "ARRAY";
    char *p = "POINTER";
    int i;
    for (i = 0; i < 5; i++) printf("*(A+%d): %c\n", i, *(A + 1));
    for (i = 0; i < 7; i++)printf("p[%d]: %c\n", i, p[i]);
    return 0;
}
