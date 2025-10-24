#include <stdio.h>

int main(){
    double liczba[10], suma = 0, MIN, MAX, srednia;
    int i;
    printf("Podaj 10 liczb:\n");
    for (i = 0; i < 10; i++){
        scanf("%lf", &liczba[i]);
    }
    MIN = MAX = liczba[0];
    for (i = 1; i < 10; i++){
        suma += liczba[i];
        if (liczba[i] < MIN) MIN = liczba[i];
        if (liczba[i] > MAX) MAX = liczba[i];
    }
    srednia = suma / 10.0;
    printf("Suma: %.2f\n Średnia = %.2f\n MIN = %.2f\n MAX = %.2f\n", suma, srednia, MIN, MAX);
    return 0;
}