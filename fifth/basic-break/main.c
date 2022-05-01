#include <stdio.h>

#pragma warning(disable:4996)

int main() {
    int num;
    int sum = 0;
    while (1) {
        printf("num:(end:0)...?");
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        sum += num;
    }
    printf("\n sum=%d", sum);
    return 0;
}
