#include <stdio.h>

int main() {
    double a, b, s;
    printf("Podaj dwie liczby: ");
    scanf("%lf %lf", &a, &b);

    if (a > b)
        printf("Pierwsza liczba jest wieksza od drugiej\n");
    else if (a == b)
        printf("Podane liczby sa rowne\n");
    else
        printf("Druga liczba jest wieksza od pierwszej\n");

    s = a + b;
    printf("Suma wprowadzonych liczb wynosi: %.2lf\n", s);
    return 0;
}
