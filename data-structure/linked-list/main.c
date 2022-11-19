#include <stdio.h>
#include <malloc.h>

struct linked_list_node {
    int data;
    struct linked_list_node *link;

};

void addNode(struct linked_list_node *H, int X) {
    if (H->head == NULL) {
        H->head = NewNode;
        return;
    }
    LastNode = H->head;
    while (LastNode->linl != NULL)
        LastNode = LastNode->link;
    LastNode->link = NewNode;

}

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
