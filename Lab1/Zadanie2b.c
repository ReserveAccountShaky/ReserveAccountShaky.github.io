#include <stdio.h>
#include <math.h>

int main() {
    double r, v;
    printf("Podaj promien r: ");
    scanf("%lf", &r);

    v = (4.0 / 3.0) * M_PI * pow(r, 3);
    printf("Objetosc kuli = %.2lf\n", v);
    return 0;
}
