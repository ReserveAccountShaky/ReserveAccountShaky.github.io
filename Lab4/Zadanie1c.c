#include <stdio.h>
int main()
{
    int n;
    printf("N: ");
    scanf("%d", &n);

    double a[n];
    printf("Podaj elementy: ");
    for (int i = 0; i < n; i++)
        scanf("%lf", &a[i]);

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                double t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    
    printf("Posortowane: \n");
    for (int i = 0; i < n; i++)
        printf("%lf\n", a[i]);

    printf("\n");
    return 0;
}