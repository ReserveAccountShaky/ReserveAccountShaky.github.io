#include <stdio.h>

int main() {
    int i = 2, j = 3, k = 4;

    k ^= i ^ j;   // побітове XOR
    printf("k) i=%d, j=%d, k=%d\n", i, j, k);

    return 0;
}
