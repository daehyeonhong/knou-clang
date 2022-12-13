#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

class TFNode {
    TFNode left;
    int treadFlag;
    int info;
    TFNode right;
};

void Preordthr(struct TFNode *root) {
    struct TFNode *p;
    p = root;
    while (p != NULL) {
        printf("%d", p->info);
        p = p->left;
    }
}
