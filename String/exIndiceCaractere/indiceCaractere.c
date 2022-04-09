#include <stdio.h>

void main(void){
   char
   s[50],
   c;

   int
   i=0,
   z=0,
   v[50];

   printf("Digite uma frase: ");
   gets(s);

   printf("Digite o caractere: ");
   scanf(" %c", &c);

   printf("Os indices sao: ");
   while(s[i] != '\0'){
      if(s[i] == c){
         v[z] = i;
         printf(" [%i]", v[z]);
         z++;
      }
      i++;
   }
}
