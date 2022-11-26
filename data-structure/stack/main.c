#include <stdio.h>

#define STACK_SIZE 10
typedef int element;
element stack[STACK_SIZE];
int top = -1;

element pop() {
    if (top == -1) {
        printf("Stack is empty!!\n");
        return 0;
    }
    return stack[top--];
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
