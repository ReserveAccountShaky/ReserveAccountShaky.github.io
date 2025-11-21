#include <stdio.h>
#include <string.h>

int main(){
char napis[256];
int licznik[256] = {0};

printf("Wpisz napis: ");
fgets(napis, sizeof(napis), stdin);

for(int i=0; napis[i]!='\0'; i++){
licznik[(unsigned char)napis[i]]++;}
printf("Wystapienia znakow: \n");

for(int i=0; i < 256; i++)
{
 if(licznik[i] > 0){
  printf("'%c' (%d): %d\n", i, i, licznik[i]);
 }
}
return 0;
}
