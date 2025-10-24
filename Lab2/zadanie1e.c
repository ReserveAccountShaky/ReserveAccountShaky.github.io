#include <stdio.h>

 int main(){
     int n, k;
     double suma = 0.0;
     printf("Podaj n:");
     scanf("%d", &n);
     for (k = 1; k <= n; k++){
         suma += 1.0 / (3*k+1);
     }
     printf("Suma szregu = %.6f\n", suma);
     return 0;
 }