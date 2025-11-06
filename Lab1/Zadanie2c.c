#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Podaj a i b: ");
    scanf("%lf %lf", &a, &b);

    c = sqrt(a * a + b * b);
    printf("Przeciwprostokatna c = %.2lf\n", c);
    return 0;
}
