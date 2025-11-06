#include <stdio.h>

int main() {
    int i = 2, j = 3, k = 4;

    ++k == ++k + --i ^ j--;  // складний вираз, виконується, але результат не використовується
    printf("l) i=%d, j=%d, k=%d\n", i, j, k);

    return 0;
}
