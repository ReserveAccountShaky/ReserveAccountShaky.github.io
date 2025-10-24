#include <stdio.h>

int main(){
 int i;
  printf("Kod dziesiętny | Znak | Szensasrkowo | Ósiemkowo\n");
  printf("-------------------------------------------------");
  for (i = 32; i<=127; i++){
        printf("%10d | %4c | %12X | %8o\n", i, i, i, i);
}
 return 0;
}

