#include <stdio.h>

int main() {
    double a, b, c, avg;
    printf("Podaj trzy liczby dodatnie: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Wszystkie liczby musza byc dodatnie!\n");
        return 1;
    }

    avg = (a + b + c) / 3.0;
    printf("Srednia arytmetyczna = %.2lf\n", avg);
    return 0;
}
