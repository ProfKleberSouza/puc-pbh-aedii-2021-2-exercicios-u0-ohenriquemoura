#include <stdio.h>

int main() {
   int l1, l2, l3;
   scanf("%i %i %i", &l1, &l2, &l3);
   
   if(l1>l2+l3||l2>l1+l3||l3>l1+l2){
     printf("OS LADOS NAO FORMAM UM TRIANGULO");
   }
   else{
     if(l1==l2 && l2==l3){
       printf("TRIANGULO EQUILATERO");
       
     }
     else if(l1==l2 && l2 !=l3 ||l2==l3 && l3!=l1 || l1==l3 && l1!=l2){
       printf("TRIANGULO ISOSCELES");
     }
     else
       printf("TRIANGULO ESCALENO");

   }

   return 0;
}