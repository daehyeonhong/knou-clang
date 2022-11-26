#include <stdio.h>

#define array_size 5


void create(int *a, int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
}

int retrieve(int *a, int i) {
    if (i >= 0 && i < array_size)
        return a[i];
    printf("Error\n");
    return (-1);
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
