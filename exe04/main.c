#include <stdio.h>

int main() {
   int a, b, c,menor, maior;
   scanf("%i %i %i", &a, &b, &c);
  
   menor = a;
   maior = a;

   if(menor > b)
       menor = b;
   if(menor > c)
       menor = c;

   if(maior < b)
       maior = b;
   if(maior < c)
       maior = c;

   printf("MENOR = %d\n", menor);
   printf("MAIOR = %d\n", maior);

   
return 0;
}