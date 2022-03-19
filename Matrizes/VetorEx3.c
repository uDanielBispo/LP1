#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int TAM = 25;
int TAM2 = 50;

void main(){
   int vetorA[TAM], vetorB[TAM], vetorC[TAM2];
   int i,contB=0, contA=0;

   for(i=0; i < TAM; i++)
   {
      vetorA[i] = rand() % 100;
      vetorB[i] = rand() % 90;
   }
   for(i=0; i < TAM2; i++)
   {
      if(i % 2 == 0)
      {
         vetorC[i] = vetorA[contA];
         contA++;
      }
      else
      {
         vetorC[i] = vetorB[contB];
         contB++;
      }
   }
   for(i = 0;i < TAM; i++)
      printf("%d ", vetorA[i]);
   printf("\n");

   for(i = 0;i < TAM; i++)
      printf("%d ", vetorB[i]);
   printf("\n\n");

   for(i = 0;i < TAM2; i++)
      printf("%d ", vetorC[i]);
}
