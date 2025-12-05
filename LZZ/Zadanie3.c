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
    if (liczba == 10) {        
        printf("Baza pelna!\n");     
        return;                       
    }

    printf("Imie: ");                  
    scanf("%49s", baza[liczba].imie); 

    printf("Nazwisko: ");              
    scanf("%49s", baza[liczba].nazwisko);

    printf("Telefon: ");               
    scanf("%19s", baza[liczba].telefon);

    liczba++;                          

    printf("Osoba dodana!\n");         
    printf("Aktualny lista osob:\n");  
    pokaz();                           
}
void pokaz() {
    for (int i = 0; i < liczba; i++) {
        printf("%d. %s %s %s\n",
               i + 1,
               baza[i].imie,
               baza[i].nazwisko,
               baza[i].telefon);
    }
}

void modyfikuj() {
    int nr;
    printf("Numer: ");
    scanf("%d", &nr);
    nr--;

    if (nr < 0 || nr >= liczba){
        printf("Nie znaleziono!\n");
        return;
}

    printf("Nowe imie: ");
    scanf("%49s", baza[nr].imie);

    printf("Nowe nazwisko: ");
    scanf("%49s", baza[nr].nazwisko);

    printf("Nowy telefon: ");
    scanf("%19s", baza[nr].telefon);
}

void skasuj() {                       
    int nr;                            
    printf("Numer osoby do usuniecia: "); 
    scanf("%d", &nr);
    nr--;                              

    if (nr < 0 || nr >= liczba) {    
        printf("Nie znaleziono!\n");  
        return;                         
    }

    for (int i = nr; i < liczba - 1; i++) { 
        baza[i] = baza[i + 1];
    }

    liczba--;                           

    printf("Osoba usunieta!\n");        
    printf("Aktualny lista osob:\n");  
    pokaz();                            
}

void sortuj() {
    struct Osoba tmp;

    for (int i = 0; i < liczba - 1; i++) {
        for (int j = 0; j < liczba - 1; j++) {

            int cmpNazw = strcmp(baza[j].nazwisko, baza[j + 1].nazwisko);

            if (cmpNazw > 0 ||(cmpNazw == 0 && strcmp(baza[j].imie, baza[j + 1].imie) > 0)) {
                tmp = baza[j];
                baza[j] = baza[j + 1];
                baza[j + 1] = tmp;
            }
        }
    }

    printf("\nPosortowano alfabetycznie:\n");
    pokaz();
}

int main() {
    int opcja;

    while (1) {
        printf("\n1-Pokaz 2-Dodaj 3-Modyfikuj 4-Kasuj 5-Sortuj 0-Koniec\nOpcja: ");
        scanf("%d", &opcja);

        if (opcja == 1) pokaz();
        else if (opcja == 2) dodaj();
        else if (opcja == 3) modyfikuj();
        else if (opcja == 4) skasuj();
        else if (opcja == 5) sortuj();
        else if (opcja == 0) return 0;
    }
}

