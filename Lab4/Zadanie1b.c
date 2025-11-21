#include <stdio.h>

int main(){
    int n, x;
    printf("Podaj liczbe elementow: ");
    scanf("%d", &n);

    int *a = malloc(n*sizeof(int));
    printf("Podaj element:");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);

    }
    printf("Szukany element:");
    scanf("%d", &x);
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            printf("Pierwsze wyspienie na pozycji %d\n", i);
            return 0;
        }
    }
    printf("Nie znaleziono \n");
    return 0;
}