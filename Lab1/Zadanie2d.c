#include <stdio.h>
#include <math.h>

int main() {
    double a, b, gamma, c;

    printf("Podaj a, b i kat gamma (w stopniach): ");
    scanf("%lf %lf %lf", &a, &b, &gamma);

    gamma = gamma * M_PI / 180.0;
    c = sqrt(a * a + b * b - 2 * a * b * cos(gamma));

    printf("Bok c = %.2lf\n", c);
    return 0;
}
