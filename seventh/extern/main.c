#include <stdio.h>

#pragma warning(disable:4996)

void extern_ex();

char s[100];

void main() {
    printf("please insert string : ");
    scanf("%s", s);
    printf("input string %s is saved extern Variable s\n", s);
    extern_ex();
}
