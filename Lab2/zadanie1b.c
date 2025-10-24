#include <stdio.h>
#include <math.h>

int main(){

    int i;
    for (i = 1; i<=10; i++){
         printf("Pi z dokładnością %d miehsc: %.*f\n", i, i, M_PI);
     }
    return 0;
}