#include <stdio.h>

#pragma warning(disable:4996)

int main() {
    char a;
    printf("문자 하나를 입력하세요 \n");
    a = getchar();
    printf("a=%c\n", a);
    return 0;
}
