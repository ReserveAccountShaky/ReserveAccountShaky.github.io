#include <stdio.h>

int main() {
    int i = 2, j = 3, k;

    k = *&i * j;  // *&i — «візьми адресу i, потім її значення» → просто i
    printf("h) i=%d, j=%d, k=%d\n", i, j, k);

    return 0;
}
