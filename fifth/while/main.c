#include <stdio.h>

int main() {
    int i = 0;
    int sum = 0;
    while (i <= 100) {
        sum += i;
        i++;
    }
    printf("from 1 to 100 sum result:%d\n", sum);
    return 0;
}
