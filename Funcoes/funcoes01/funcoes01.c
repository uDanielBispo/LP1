#include <stdio.h>
#include <locale.h>

void main ()
{

   setlocale(LC_ALL, "Portuguese");

   float totPago;
   int idade, numDependentes;

   printf("Digite sua idade: ");
   scanf("%i", &idade);
   printf("Digite o numero de dependentes: ");
   scanf("%i", &numDependentes);

   if(idade >=16 && idade < 20)
   {
      pJovem(numDependentes);
   }
   else
      pAdulto(numDependentes);
}

int pJovem(numDependentes){
   float totPago;

   printf("\nSeu plano é: Jovem\n");
   totPago = 200 + ((30 + 10*numDependentes)*12);
   printf("\nTotal a pagar em um ano: %.2f", totPago);
}

int pAdulto(numDependentes){
   float totPago;
   if(numDependentes == 0)
   {
      printf("Seu plano é: Adulto\n");
      totPago = 300 + ((60*0.9*6) + 60 * 6);
      printf("Seu número de dependentes é: %i\n", numDependentes);
      printf("Total a pagar em um ano: %.2f", totPago);
   }
   else
   {
      printf("Seu plano e: Adulto\n");
      totPago = 300 + ((60 + 60 * numDependentes)*12);
      printf("Seu número de dependentes é: %i\n", numDependentes);
      printf("Total a pagar em um ano: %.2f", totPago);
   }
}
