#include <stdio.h>
#include <stdlib.h>

void narysujTrojkat(char znak, char kolor[], int bok) {
    char cmd[20];
    sprintf(cmd, "color %s", kolor);
    system(cmd);

    for (int i = 1; i <= bok; i++) {
        for (int j = 1; j <= i; j++)
            printf("%c", znak);
        printf("\n");
    }
}

int main() {
    char znak, kolor[3];
    int bok;
    printf("Podaj znak: ");
    scanf(" %c", &znak);
    printf("Podaj kod koloru (np. 0A): ");
    scanf("%s", kolor);
    printf("Podaj dlugosc boku: ");
    scanf("%d", &bok);

    narysujTrojkat(znak, kolor, bok);
    return 0;
}
