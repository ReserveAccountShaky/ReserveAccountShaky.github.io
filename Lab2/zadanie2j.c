#include <stdio.h>

int main() {
    int i = 2, k = 4;

    k = -(k--) - --i;
    printf("j) i=%d, k=%d\n", i, k);

    return 0;
}
