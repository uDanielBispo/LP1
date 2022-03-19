#include <stdio.h>

double POT(int B, int E);

void main(void){
   int Base, Expoente;
   double Res;

   printf("Digite a base: ");
   scanf("%i", &Base);
   printf("Digite o expoente: ");
   scanf("%i", &Expoente);

   Res = POT(Base, Expoente);
   printf("Resultado: %.2f", Res);
}

double POT(int B, int E){
   double i, Resultado=1;
   for(i=1; i<=E; i++)
      Resultado = Resultado*B;

   return Resultado;
}

