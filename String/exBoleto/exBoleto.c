#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//3419012345123456789012345678901112340000012345
//3419012345  1  2  3  4  5  6  7  8  9  0  1  2  3  4  5  6  7  8  9  0  1  1  1  2  3  4  0  0  0  0  0  1  2  3  4  5
//0123456789 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45
void main(void){
    char
    linhaDigitavel[47],
    linhaDigitavelInvertida[47],
    valorAPagar[12] = "0000000000",
    banco[4] = "000";

    int i, z;
    float floatValorAPagar, multa = 0.1;

    printf("Digite a linha digitavel do codigo de barras:\n");
    gets(linhaDigitavel);

    while(strcmp(linhaDigitavel, "FIM")!=0)
    {
        for(i=47,z=0; i>=0; i--){
            linhaDigitavelInvertida[z]= linhaDigitavel[i];
            z++;
        }

         for(i=36,z=0; i<=46; i++){
            valorAPagar[z] = linhaDigitavel[i];
            z++;
         }

        floatValorAPagar =  (atof(valorAPagar)/100);
        floatValorAPagar += floatValorAPagar*multa;

        strncpy(banco, linhaDigitavel, 3);

        printf("\nSeu banco e: ");
        if(strcmp(banco, "001")==0)
            printf("Banco do Brasil\n");
        else if(strcmp(banco, "033")==0)
            printf("Santander\n");
        else if(strcmp(banco, "104")==0)
            printf("Caixa Economica Federal\n");
        else if(strcmp(banco, "341")==0)
            printf("Itau\n");
        else if(strcmp(banco, "745")==0)
            printf("Citibank\n");
        else
            printf("Banco Invalido\n");

        printf("Valor a pagar: %.2f", floatValorAPagar);

        printf("\n\n======\n\nDigite a linha digitavel do codigo de barras:\n");
        gets(linhaDigitavel);
    }
}


