#include <stdio.h>
#include <string.h>
#include <math.h>

double fun_sin(double x) { return sin(x); }
double fun_cos(double x) { return cos(x); }
double fun_tan(double x) { return tan(x); }
double fun_ctg(double x) { return 1.0 / tan(x); }

double fun_parabola(double x) { return x * x; }
double fun_sqrt(double x) { return sqrt(x); }
double fun_exp(double x) { return exp(x); }
double fun_log(double x) { return log(x); }

double fun_szescian(double x) { return x * x * x; }
double fun_linia(double x) { return x; }

struct Funkcja {
    char *nazwa;
    double (*wsk)(double);
};

struct Funkcja tablica[] = {
    {"sin", fun_sin},
    {"cos", fun_cos},
    {"tan", fun_tan},
    {"ctg", fun_ctg},
    {"parabola", fun_parabola},
    {"sqrt", fun_sqrt},
    {"exp", fun_exp},
    {"log", fun_log},
    {"szescian", fun_szescian},
    {"linia", fun_linia}
};

int main() {
    char nazwa[50];
    double arg;
    int ile = sizeof(tablica)/sizeof(tablica[0]);

    printf("Podaj nazwe funkcji: ");
    scanf("%49s", nazwa);
    printf("Podaj argument: ");
    scanf("%lf", &arg);

    for (int i = 0; i < ile; i++) {
        if (strcmp(nazwa, tablica[i].nazwa) == 0) {
            double wynik = tablica[i].wsk(arg);
            printf("Wynik: %lf\n", wynik);
            return 0;
        }
    }

    printf("Nie znaleziono funkcji!\n");
    return 0;
}
