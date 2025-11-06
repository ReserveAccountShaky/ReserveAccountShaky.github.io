#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, p, q, x1, x2;
    printf("Podaj wspolczynniki a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("To nie jest trójmian kwadratowy!\n");
        return 1;
    }

    delta = b * b - 4 * a * c;
    p = -b / (2 * a);
    q = -delta / (4 * a);
    printf("Wierzcholek paraboli: (%.2lf, %.2lf)\n", p, q);
    printf("Punkt przeciecia z OY: (0, %.2lf)\n", c);

    if (delta > 0) {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Miejsca zerowe: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Jedno miejsce zerowe: x = %.2lf\n", x1);
    } else {
        printf("Brak miejsc zerowych (delta < 0)\n");
    }

    return 0;
}
