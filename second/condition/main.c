#include <stdio.h>

#define CONDITION 1

void main() {
#if CONDITION
    printf("A Program Compile");
#else
    printf("B Program Compile");
#endif
}
