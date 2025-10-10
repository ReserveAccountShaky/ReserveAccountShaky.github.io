#include <stdio.h>
#include <math.h>

int main(){ 
    double r, V, pi; 
    printf("Podaj r");
    scanf("%f", &r);
    V = 4/3*pi*r*r*r;
    printf("V= %2lf\n", V);

    return 0;
    
    }
