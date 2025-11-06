#include <stdio.h>

int main() {
    double a, b, c, w;
    printf("Podaj a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (b + c == 0) {
        printf("Blad: dzielenie przez 0!\n");
        return 1;
    }

    w = (a * b) / (b + c) + (a * c) / (b + c);
    printf("W = %.2lf\n", w);
    return 0;
}
