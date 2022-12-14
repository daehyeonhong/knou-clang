#include <stdio.h>

struct KNode {
    struct KNode *left;
    char key[10];
    int info;
    struct KNode *right;
};

void Inorder(struct KNode *rootptr) {
    if (rootptr != NULL) {
        Inorder(rootptr->left);
        printf("%d", rootptr->info);
        Inorder(rootptr->right);
    }
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
