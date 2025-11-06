#include <stdio.h>

int main() {
    int n;
    char znak;
    printf("Podaj znak: ");
    scanf(" %c", &znak);
    printf("Podaj dlugosc boku: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%c", znak);
        printf("\n");
    }
    return 0;
}
