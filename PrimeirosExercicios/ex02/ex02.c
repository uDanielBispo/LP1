#include <stdio.h>
#include <locale.h>

void main (){
   setlocale(LC_ALL, "Portuguese");

   int codigoFun, tempServ, setor, contador;
   float salBase, gratification, indice;

   contador = 2;
      printf("\n========================================Funcionario 1======================================== \n", contador);

   printf("Digite seu codigo de funcionario: ");
   scanf("%i", &codigoFun);

   while(codigoFun > 0 && codigoFun <= 399){
      setor = codigoFun / 100;

      printf("Digite o tempo de serviço: ");
      scanf("%i", &tempServ);

      printf("Digite o seu salario: ");
      scanf("%f", &salBase);

      switch (setor){
         case 1:
               if(tempServ <= 5){
                  indice = 0.025;
               }
               else{
                  indice = 0.045;
               }
         break;
         case 2:
               if(tempServ <= 5){
                  indice = 0.035;
               }
               else{
                  indice = 0.055;
               }
         break;
         case 3:
               if(tempServ <= 5){
                  indice = 0.040;
               }
               else{
                  indice = 0.065;
               }
         break;
      }
      gratification = salBase * indice;
      printf("Sua gratificação é de: %.2f", gratification);
      printf("\n========================================Funcionario %i======================================== \n", contador);
      printf("Digite seu codigo de funcionario: ");
      scanf("%i", &codigoFun);
      contador = contador + 1;
   }

}
