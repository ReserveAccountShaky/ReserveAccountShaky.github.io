#include <stdio.h>
#include <math.h>

int main() {
    double a, p, n, k;
    printf("Podaj a, p i n: ");
    scanf("%lf %lf %lf", &a, &p, &n);

    k = a * pow((1 + p / 100), n);
    printf("Wartosc koncowa k = %.2lf\n", k);
    return 0;
}
