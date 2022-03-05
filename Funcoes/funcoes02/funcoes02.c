#include <stdio.h>
#include <stdlib.h>

int main(){
   float publicTot, valTot;

   scanf("%f", &publicTot);

   fCalculo(publicTot, valTot);

   printf("%.2f", fCalculo(valTot));
}

float fCalculo(float publicTot,float valTot){
   float ingPop, ingGeral, ingCadeira, ingArqui;

   ingPop=publicTot*0.1;
   ingGeral=publicTot*0.5;
   ingArqui=publicTot*0.3;
   ingCadeira=publicTot*0.1;

   printf("%.1f\n", ingPop);
   printf("%.1f\n", ingGeral);
   printf("%.1f\n", ingArqui);
   printf("%.1f\n", ingCadeira);

   valTot = ingPop*5 + ingGeral*10 + ingArqui *20 + ingCadeira *30;
   return valTot;
}
