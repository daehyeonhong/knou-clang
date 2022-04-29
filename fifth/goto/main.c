#include <stdio.h>

#pragma warning(disable:4996)

int main() {
    int n;
    int c = 'A';
    while (1) {
        printf("\n count?");
        scanf("%d", &n);
        for (int i = 0; i <= n; ++i) {
            printf("c=%c\n", c);
            if (c == 'Q') goto end;
            c++;
        }
    }
    end:
    printf("END");
    return 0;
}
