#include <stdio.h>
#include <windows.h>

void main (void){
   int l,c, LTAM = 5, CTAM = 5;
   double Matriz[LTAM][CTAM];

   for(l=0; l<LTAM; l++){
      for(c=0; c<CTAM; c++){
         Matriz[l][c] = c+1;
         printf("%.f ", Matriz[l][c]);
         Sleep(1000);
      }
      printf("\n");
   }
}
