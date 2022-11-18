#include <stdio.h>

#define QUEUE_SIZE 5
typedef int element;
element queue[QUEUE_SIZE];
int front = -1;
int rear = -1;

void Add_q(int *rear, element item) {
    if (*rear == QUEUE_SIZE - 1) {
        printf("Queue is full!");
        return;
    }
    queue[++(*rear)] = item;
    return;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
