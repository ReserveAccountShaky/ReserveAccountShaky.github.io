#include <stdio.h>

int main() {
    int wiersze, i, j;
    printf("Podaj liczbę wierszy trójkąta Pascala: ");
    scanf("%d", &wiersze);

    for (i = 0; i < wiersze; i++) {
        int liczba = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", liczba);
            liczba = liczba * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
