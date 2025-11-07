#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wprowadz(double A[], int n){
    for(int i=0;i<n;i++)
    {
        printf("A[%d] = ",i);
        scanf("%lf",&A[i]);
    }
}
void losuj(double B[], int n)
{
     for(int i=0;i<n;i++)
        B[i] = rand() % 101;
}
void iloczyn(double C[], double B[], double A[], int n){
    for(int i=0;i<n;i++)
        C[i] = A[i]*B[i];
}
void wyswietl(double X[], int n, char name){
    printf("Tablica %c:", name);
    for(int i=0;i<n;i++)
        printf("%.2lf", X[i]);
    printf("\n");
}
int main()
{
    srand(time(NULL));
    int n;
    printf("Podaj n: ");
    scanf("%d",&n);
    double A[n], B[n], C[n];
    wprowadz(A, n);
    losuj(B, n);
    iloczyn(A, B, C, n);
    wyswietl(A, n, 'A');
    wyswietl(B, n, 'B');
    wyswietl(C, n, 'C');

    return 0;
}