#include <stdio.h>

#pragma warning(disable:4996)

int main() {
    char s[50];
    printf("Insert String?");
    gets(s);
    printf("gets() input String = %s\n", s);
    printf("Insert String?");
    scanf("%s", s);
    printf("scanf() input String = %s\n", s);
    return 0;
}
