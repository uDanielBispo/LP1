#include <stdio.h>

void main(void){
   int
   i,
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

   for(l=0; l < linha; l++)
      for(c=0; c < coluna; c++)
         scanf("%i", &tab[l][c]);

   //Jeito novo
   for(l=0; l < linha; l++){
      for(c=0; c < coluna; c++){
         printf("[%i]", tab[l][c]);
         resultado[tab[l][c]] = resultado[tab[l][c]] + 1;
      }
      printf("\n");
   }
   printf("\nAusencia de pecas: %i\nPeao: %i\nCavalo: %i\nTorre: %i\nBispo: %i\nRei: %i\nRainha: %i\n", resultado[0], resultado[1], resultado[2], resultado[3], resultado[4], resultado[5], resultado[6]);
}

/*
ENTRADA TESTE
6 0 0 5 0 0 1 1
0 1 0 2 0 3 0 2
0 1 1 1 0 1 0 0
0 0 2 0 3 4 3 1
0 1 1 0 1 0 0 0
0 1 3 0 4 0 1 1
0 0 0 2 2 2 1 6
6 6 6 6 6 6 6 6
*/
/*
//jeito antigo
         /*switch(tab[l][c]){
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
*/
