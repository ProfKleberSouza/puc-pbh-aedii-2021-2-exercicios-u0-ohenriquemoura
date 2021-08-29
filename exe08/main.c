#include <stdio.h>
#define tam 1000

int main() {
   int vet[tam];
  
   for(int i=0;i<tam;i++){
     scanf("%i", &vet[i]);
     if(vet[i]>0){
       printf("POSITIVO\n");
     }
     else if(vet[i]<0){
       printf("NEGATIVO\n");
     }
     else if(vet[i]==0){
      break;
     }
     
   } 
   return 0;
}