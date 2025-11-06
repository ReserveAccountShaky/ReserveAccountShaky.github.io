#include <stdio.h>
#include <math.h>

int main() {
    double r, pk;

    printf("Podaj promien r: ");
    scanf("%lf", &r);

    pk = M_PI * r * r;
    printf("Pole kola = %.2lf\n", pk);

    return 0;
}
