#include <stdio.h>
#include <math.h>

int main() {
    double c, a, b, k;
    printf("Podaj a");
    scanf("%f", &a);
    printf("Podaj b");
    scanf("%f", &b);
    printf("Podaj k");
    scanf("%f", &k);
    c = sqrt(a*a + b*b - 2*a*b*cos(k));
    printf("c= %2lf\n", c);

    return 0;
}
