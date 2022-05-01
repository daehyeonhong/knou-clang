#include <stdio.h>

int main() {
    int i = 2;
    int j = 0;
    while (i < 10) {
        j = 1;
        while (j < 10) {
            printf("%d*%d=%d\n", i, j, i * j);
            j++;
        }
        puts("\n");
        i++;
    }
    return 0;
}
