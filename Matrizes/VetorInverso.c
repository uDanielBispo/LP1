#include <stdio.h>


void main (void){
   int i,z=0;
   float vetA[100], vetB[100];

   for(i=0;i<100;i++){
      vetA[i] = i + 1;
      printf("%.f ", vetA[i]);
   }

   printf("\n");

   for(i=99;i>=0;i--){
      vetB[z] = vetA[i];
      printf("%.f ", vetB[z]);
      z++;
   }
}
