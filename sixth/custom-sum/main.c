#include <stdio.h>

int sum(int, int);

test();

int main() {
    int s;
    test();
    sum(10, 20);
    s = sum(30, 40);
    printf("sum from 30 to 40=%d\n", s);
    printf("sum from 100 to 200=%d\n", sum(100, 200));
    return 0;
}

test() {
    printf("함수의 여러 가지 사용 방법\n");
}

int sum(int a, int b) {
    int i, s = 0;
    for (i = a; i <= b; i++)s += i;
    return s;
}
