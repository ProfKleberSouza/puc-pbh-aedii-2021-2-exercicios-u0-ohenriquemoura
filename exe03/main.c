#include <stdio.h>

int main() {
   int num;
   scanf("%i", &num);

   if(num==0){
     printf("NUMERO NEUTRO");
   }else{

     if(num%2==0){
       printf("NUMERO PAR ");

       if(num<0){
         printf("NEGATIVO");
       }else{
         printf("POSITIVO");
       }
     }else{
       printf("NUMERO IMPAR ");

       if(num<0){
         printf("NEGATIVO");
       }else{
         printf("POSITIVO");
       }
     }
   }

   
   return 0;
}