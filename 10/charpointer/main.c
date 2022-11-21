#include <stdio.h>

int main() {
    char *cp = "COMPUTER";
    int i = 0;
    do {

        printf("*(cp+%d):%c\n", i, *(cp + i));
    } while (*(cp + i++) != 0);
    return 0;
}
