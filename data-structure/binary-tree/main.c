#include <stdio.h>

struct node {
    struct node *left;
    struct node *right;
    int info;
};

struct node *nodeptr;

void preorder(struct node *tree_ptr) {
    if (tree_ptr) {
        printf("%d", tree_ptr->info);
        preorder(tree_ptr->left);
        preorder(tree_ptr->right)
    }
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
