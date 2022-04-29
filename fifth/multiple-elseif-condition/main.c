#include <stdio.h>

#pragma warning(disable:4996)

int main() {
    int score;
    printf("please insert score: ");
    scanf("%d", &score);
    if (score >= 90) printf("A");
    else if (score >= 80) printf("B\n");
    else if (score >= 70) printf("C\n");
    else if (score >= 60) printf("D\n");
    else printf("F\n");
    return 0;
}
