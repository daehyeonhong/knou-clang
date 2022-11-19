#include <stdio.h>
#include <malloc.h>

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
    printf("a is %d, b is %f\n", *p_a, *p_b);
    return 0;
}
