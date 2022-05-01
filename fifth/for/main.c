#include <stdio.h>

int main() {
    int i;
    int sum = 0;
    for (i = 0; i <= 10; ++i)
        sum += i;
    printf("from 1 to %d sum result = %d", i - 1, sum);
    return 0;
}
