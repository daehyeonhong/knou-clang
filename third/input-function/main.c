#include <stdio.h>

#pragma warning(disable:4996)

int main() {
    int jsu1, jsu2;
    float ssu1, ssu2;
    printf("\n정수를 입력하시오");
    scanf("%d %d", &jsu1, &jsu2);
    printf("\n실수를 입력하세요");
    scanf("%f %f", &ssu1, &ssu2);
    printf("\n정수는 %d %d \n", jsu1, jsu2);
    printf("실수는 %f %f\n", ssu1, ssu2);
    return 0;
}
