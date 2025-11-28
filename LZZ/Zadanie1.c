#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Figura {
    char nazwa[50];
    double pole;
    double obwod;
    struct Figura *next;
    struct Figura *prev;
};

struct Figura *head = NULL;
struct Figura *tail = NULL;

void dodaj() {
    struct Figura *nowa = (struct Figura*)malloc(sizeof(struct Figura));
    if (!nowa) return;

    printf("Podaj nazwe figury: ");
    scanf("%49s", nowa->nazwa);
    printf("Podaj pole: ");
    scanf("%lf", &nowa->pole);
    printf("Podaj obwod: ");
    scanf("%lf", &nowa->obwod);

    nowa->next = NULL;
    nowa->prev = tail;
    if (tail) tail->next = nowa;
    else head = nowa;
    tail = nowa;
}

void usun() {
    char nazwa[50];
    printf("Podaj nazwe figury do usuniecia: ");
    scanf("%49s", nazwa);

    struct Figura *p = head;
    while (p) {
        if (strcmp(p->nazwa, nazwa) == 0) {
            if (p->prev) p->prev->next = p->next;
            else head = p->next;
            if (p->next) p->next->prev = p->prev;
            else tail = p->prev;
            free(p);
            printf("Usunieto.\n");
            return;
        }
        p = p->next;
    }
    printf("Nie znaleziono.\n");
}

void pokaz() {
    struct Figura *p = head;
    int i = 1;
    while (p) {
        printf("%d. %s | pole: %.2lf | obwod: %.2lf\n", i, p->nazwa, p->pole, p->obwod);
        p = p->next;
        i++;
    }
}

void pokaz_w_tyl() {
    struct Figura *p = tail;
    int i = 1;
    while (p) {
        printf("%d. %s | pole: %.2lf | obwod: %.2lf\n", i, p->nazwa, p->pole, p->obwod);
        p = p->prev;
        i++;
    }
}

int main() {
    int opcja;
    do {
        printf("\n1 - Dodaj figure\n2 - Usun figure\n3 - Pokaz liste (przod)\n4 - Pokaz liste (tyl)\n0 - Wyjscie\nOpcja: ");
        scanf("%d", &opcja);
        if (opcja == 1) dodaj();
        else if (opcja == 2) usun();
        else if (opcja == 3) pokaz();
        else if (opcja == 4) pokaz_w_tyl();
    } while (opcja != 0);
    return 0;
}
