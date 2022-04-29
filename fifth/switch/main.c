#include <stdio.h>

#pragma warning(disable:4996)

int main() {
    int n;
    printf("n: ");
    scanf("%d", &n);
    int remain = n % 5;
    printf("\n n/5 = %d\n", n / 5);
    switch (remain) {
        case 0:
            printf("remain is 0\n");
            break;
        case 1:
            printf("remain is 1\n");
            break;
        case 2:
            printf("remain is 2\n");
            break;
        default:
            printf("remain is 3 or 4\n");
            break;
    }
    return 0;
}
