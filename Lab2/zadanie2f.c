#include <stdio.h>

int main() {
    int i = 2, j = 3, k = 4;

    k += -i++ - ++j;
    printf("f) i=%d, j=%d, k=%d\n", i, j, k);

    return 0;
}
