#include <stdio.h>


struct TNode {
    int info;
    TNode left;
    TNode right;
    TNode left_thread;
    TNode right_thread;
};

void inorder(struct TNode *firstin) {
    struct TNode *p;
    p = firstin;
    while (p != NULL) {
        printf("%d", p->info);
        p = p->right_thread;
    }
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
