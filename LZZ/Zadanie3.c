#include <stdio.h>
#include <string.h>

struct Osoba {
    char imie[50];
    char nazwisko[50];
    char telefon[20];
};

struct Osoba baza[10];
int liczba = 0;

void dodaj() {
    if (liczba >= 10) {
        printf("Baza jest pelna — nie mozna dodac nowej osoby.\n");
        return;
    }
    printf("Imie: ");     scanf("%49s", baza[liczba].imie);
    printf("Nazwisko: "); scanf("%49s", baza[liczba].nazwisko);
    printf("Telefon: ");  scanf("%19s", baza[liczba].telefon);
    liczba++;
}

void pokaz() {
    for (int i = 0; i < liczba; i++)
        printf("%d. %s %s %s\n", i + 1,
               baza[i].imie,
               baza[i].nazwisko,
               baza[i].telefon);
}

void modyfikuj() {
    int nr;
    printf("Podaj numer do modyfikacji: ");
    scanf("%d", &nr);
    nr--;
    if (nr < 0 || nr >= liczba) return;
    printf("Nowe imie: ");     scanf("%49s", baza[nr].imie);
    printf("Nowe nazwisko: "); scanf("%49s", baza[nr].nazwisko);
    printf("Nowy telefon: ");  scanf("%19s", baza[nr].telefon);
}

void kasuj() {
    int nr;
    printf("Podaj numer do skasowania: ");
    scanf("%d", &nr);
    nr--;
    if (nr < 0 || nr >= liczba) return;
    for (int i = nr; i < liczba - 1; i++)
        baza[i] = baza[i + 1];
    liczba--;
}

void sortuj() {
    for (int i = 0; i < liczba - 1; i++) {
        for (int j = 0; j < liczba - i - 1; j++) {
            if (strcmp(baza[j].nazwisko, baza[j+1].nazwisko) > 0) {
                struct Osoba tmp = baza[j];
                baza[j] = baza[j+1];
                baza[j+1] = tmp;
            }
        }
    }
}

int main() {
    int opcja;
    while (1) {
        printf("\n1-Pokaz  2-Dodaj  3-Modyfikuj  4-Kasuj  5-Sortuj  0-Koniec\nOpcja: ");
        scanf("%d", &opcja);
        if (opcja == 1) pokaz();
        else if (opcja == 2) dodaj();
        else if (opcja == 3) modyfikuj();
        else if (opcja == 4) kasuj();
        else if (opcja == 5) sortuj();
        else if (opcja == 0) return 0;
    }
}
