#include <stdio.h>
#include <math.h>

#pragma warning(disabled:4996)

int main() {
    int num = 1;
    while (num != 0) {
        printf("\n num=?");
        scanf("%d", &num);
        if (num < 0) {
            printf("0:Negative Number!!!\n");
            continue;
        }
        printf("Square root of %d=%f\n", num, sqrt(num));
    }
    printf("\n\n The end");
    return 0;
}
