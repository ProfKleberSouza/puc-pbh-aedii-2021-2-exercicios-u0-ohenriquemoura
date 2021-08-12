#include <stdio.h>

int main() {
   float n1, n2, n3, n4,media;
   scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
   
   media=(n1+n2+n3+n4)/4.0;

   printf("NOTA = %0.1f ",media);
   
   if(media>6.0){
     printf("(APROVADO)");
   }
   else{
     printf("(REPROVADO)");
   }
   return 0;
}