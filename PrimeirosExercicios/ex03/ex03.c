#include <stdio.h>
int main(void)
{
   int cNum = 0 ;
   int  iNum = 0 ;
   while(cNum <= 260)
      {
         printf( "%i   %c\n", iNum, cNum );
         iNum = iNum + 1 ;
         cNum = cNum + 1 ;
      }
   return 0 ;
}
