#include <stdio.h>
#include <math.h>

int main(){ 
    double a, b, c; 
    printf("Podaj a");
    scanf("%f", &a);
    printf("Podaj b");
    scanf("%f", &b);
    c = sqrt((a*a) + (b*b));
    printf("c= %.2lf\n", c);
    
    return 0;
}