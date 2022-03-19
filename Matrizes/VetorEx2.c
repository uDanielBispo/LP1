#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int TAM = 20;

void main(void){
   int i, vetorA[TAM], vetorB[TAM], vetorC[TAM];

  for(i = 0;i < TAM; i++){
      vetorA[i] = rand() % 100;
      vetorB[i] = rand() % 50;
      vetorC[i] = vetorA[i] + vetorB[i];
  }

   for(i = 0;i < TAM; i++){
      printf("%d ", vetorA[i]);
   }

    printf("\n");

   for(i = 0;i < TAM; i++){
      printf("%d ", vetorB[i]);
   }

   printf("\n");

   for(i = 0;i < TAM; i++){
      printf("%d ", vetorC[i]);
   }
}


