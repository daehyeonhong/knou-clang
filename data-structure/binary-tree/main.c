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
        preorder(tree_ptr->right);
    }
}


int main() {
    printf("Hello, World!\n");
    return 0;
}

int get_node_count(nodeptr *root) {
    if (root == null) return 0;
    int result = 1;
    result = get_node_count((nodeptr*)root->left)
           + get_node_count((nodeptr*)root->right);
    return result;
}
