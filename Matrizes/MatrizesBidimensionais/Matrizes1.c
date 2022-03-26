#include <stdio.h>
#include <locale.h>

void main(void){
   setlocale(LC_ALL, "Portuguese");
   int vetor[5], i, soma;

   for(i=0;i<5;i++){
      printf("Informe o %dº numero: ", i+1);
      scanf("%d", &vetor[i]);
   }
   for(i=0;i<5;i++){
      printf("%d, ", vetor[i]);
      soma += vetor[i];
   }
      printf("\n");
   for(i=4;i>=0;i--){
      printf("%d, ", vetor[i]);
   }
}
