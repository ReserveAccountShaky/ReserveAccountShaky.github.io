#include <stdio.h>
#include <math.h>
#define PI 3.141



int main() {
    float r;
    printf("Podaj r: ");
    scanf("%f", &r);
    float pole = PI * r * r;
    printf("Pole koła jest: %.2f\n", pole);

    return 0;
}
    
