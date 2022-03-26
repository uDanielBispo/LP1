#include <stdio.h>
void main(void){
   int
   l,
   c,
   cAusenciaPecas=0,
   cPeao=0,
   cCavalo=0,
   cTorre=0,
   cBispo=0,
   cRei=0,
   cRainha=0,
   resultado[7]={0,0,0,0,0,0,0},
   linha=8,
   coluna=8,
   tab[linha][coluna];

   for(l=0; l<linha; l++){
      for(c=0; c<coluna; c++){
         scanf("%i", &tab[l][c]);
         switch(tab[l][c]){
            case 0:
               cAusenciaPecas += 1;
         break;
            case 1:
               cPeao += 1;
         break;
            case 2:
               cCavalo += 1;
         break;
            case 3:
               cTorre += 1;
         break;
            case 4:
               cBispo += 1;
         break;
            case 5:
               cRei += 1;
         break;
            case 6:
               cRainha += 1;
         break;
         }
      }
   }
   printf("Ausencia de pecas: %i\nPeao: %i\nCavalo: %i\nTorre: %i\nBispo: %i\nRei: %i\nRainha: %i\n", cAusenciaPecas, cPeao, cCavalo, cTorre, cBispo, cRei, cRainha);
}
