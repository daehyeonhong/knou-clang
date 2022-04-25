#include <stdio.h>

int main() {
    int i, sum;
    for (i = 1; i <= 10; ++i) {
        sum += i;
    }
    printf("1부터 10까지의 합=%d\n", sum);
}
