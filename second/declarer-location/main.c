#include <stdio.h>

int a = 100;

void func() {
    int a = 200;
    printf("func()에서 a의 값==> %d\n", a);
}

int main() {
    printf("main()에서 a의 값==> %d\n", a);
    func();
}
