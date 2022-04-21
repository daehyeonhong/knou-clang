#include <stdio.h>

int main() {
    char ch;
    int in;
    ch = in = 'A';
    printf("ch = %d\n", ch);
    printf("in = %d\n", in);
    ch = in = 100;
    printf("ch = %c\n", ch);
    printf("in = %c\n", in);
}
