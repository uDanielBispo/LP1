#include <stdio.h>

void main(void){
   int
      z,
      i,
      vetInt[6];

   char vetChar[6];

   for(i=0;i<6;i++){
      printf("Digite o numero da %io posicao: ", i+1);
      scanf("%i", &vetInt[i]);
      printf("Digite o caracter da %io posicao: ", i+1);
      scanf(" %c", &vetChar[i]);
   }

   for(i=0;i<6;i++){
      for(z=0;z<vetInt[i];z++){
         printf(" %c", vetChar[i]);
      }
      printf("\n");
   }
}
