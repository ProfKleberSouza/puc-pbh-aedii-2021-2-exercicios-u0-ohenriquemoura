#include <stdio.h>

int main() {
   float T,V,R;
   
   scanf("%f %f %f", &T, &V, &R);

   float D,L;

   D=V*T;
   L=D/R;

   printf("R = %0.1f\n", R);
   printf("V = %0.1f\n", V);
   printf("T = %0.1f\n", T);
   printf("D = %0.1f\n", D);
   printf("L = %0.1f\n", L);

   return 0;
}