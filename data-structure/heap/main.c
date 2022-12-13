#include <stdio.h>


typedef struct {
    int heap[MAX_Data];
    int heap_size;
} HeapType;

int deleteHeap(HeapType *h) {
    int parent, child;
    int item, temp;

    item = h->heap[1];
    temp = h->heap[(h->heap_size)];
    parent = 1;
    child = 2;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
