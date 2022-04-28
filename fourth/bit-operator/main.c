#include <stdio.h>

int main() {
    float a = 3.14;
    printf("int type's size=%dbyte\n", sizeof(int));
    printf("float type's size=%dbyte\n", sizeof(float));
    int b = 3, c = 4;
    double d = (double) b / c;
    printf("division result: %f\n", d);
    return 0;
}
