#include <stdio.h>
#include <stdlib.h>

float fCalculo(float publicTot,float valTot);

int main(){
   float publicTot, valTot;

   scanf("%f", &publicTot);
   fCalculo(publicTot, valTot);
}

float fCalculo(float publicTot,float valTot){
   float ingPop, ingGeral, ingCadeira, ingArqui;

   ingPop=publicTot*0.1;
   ingGeral=publicTot*0.5;
   ingArqui=publicTot*0.3;
   ingCadeira=publicTot*0.1;

   printf("ingPop: %.1f\n", ingPop);
   printf("ingGeral: %.1f\n", ingGeral);
   printf("ingArqui: %.1f\n", ingArqui);
   printf("ingCadeira: %.1f\n", ingCadeira);

   valTot = ingPop*5 + ingGeral*10 + ingArqui *20 + ingCadeira *30;

   printf("valTot: %.1f\n", valTot);
   return valTot;
}
