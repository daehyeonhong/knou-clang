#include <stdio.h>
#include <string.h>

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

struct KNode *Search(char k[], struct KNode *r) {
    if (r == NULL) return NULL;
    else if (strcmp(k, r->key) == 0) return r;
    else if (strcmp(k, r->key) < 0) return Search(k, r->left);
    else return Search(k, r->right);
}

struct KNode *Insert(struct KNode *newptr, struct KNode *r) {
    if (r == NULL)return newptr;
    else if (strcmp(newptr->key, r->key) == 0)DUPLICATE_ENTRY();
    else if (strcmp(newptr->key, r->key) < 0) r->left = Insert(newptr, r->left);
    else r->right = Insert(newptr, r->right);
    return r;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
