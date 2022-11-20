#include <stdio.h>
#include <malloc.h>

typedef struct ListNode {
    int data;
    struct ListNode *link;
} listNode;
typedef struct {
    listNode *head;
} linkedList_h;


linkedList_h *createLinkedList_h(void) {
    linkedList_h *H;
    H = (linkedList_h *) malloc(sizeof(linkedList_h));
    H->head = NULL;
    return H;
}

struct linked_list_node {
    int data;
    struct linked_list_node *link;

};

int main() {
    int a, *p_a;
    float b, *p_b;

    p_a = (int *) malloc(sizeof(int));
    p_b = (float *) malloc(sizeof(float));

    *p_a = 10;
    *p_b = 3.14f;

    printf("a is %d, b is %f\n", *p_a, *p_b);
    free(p_a);
    free(p_b);

    return 0;
}
