#include <stdio.h>

void main() {
    int i = 1;
    auto int j = 2;
    {
        /* Block 1 */
        int i = 3;
        {
            /*Block 2*/
            printf("Block 2 i = %d\n", i);
            printf("Block 2 j = %d\n", j);
        }
        printf("Block 1 i = %d\n", i);
    }
    printf("void main() function i = %d\n", i);
}
