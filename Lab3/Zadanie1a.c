#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n;
    printf("Podaj ile liczb chcesz wprowadzic:");
    scanf("%d", &n);
    double A[n], B[n], C[n];
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        printf("A[%d] = ", i);
        scanf("%lf", &A[i]);
    }
    for(int i = 0; i < n; i++)
        B[i] = rand() % 101;

    for(int i = 0; i < n; i++)
        C[i] = B[i] * A[i];

    printf("\n Tablica A: ");
    for(int i = 0; i < n; i++)
        printf("\t%.lf ", A[i]);

   printf("\n Tablica B: ");
    for(int i = 0; i < n; i++)
        printf("\t%.lf ", B[i]);

  printf("\n Tablica C: ");
    for(int i = 0; i < n; i++)
        printf("\t%.lf ", C[i]);

   return 0;
}