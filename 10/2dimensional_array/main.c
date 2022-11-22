#include <stdio.h>

int main() {
    static int a[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, -9}};
    int *pt;
    pt = a[0];
    while (*pt != -9) {
        printf("%d", *pt);
        pt++;
    }
    return 0;
}
