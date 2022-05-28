#include <stdio.h>
#include <string.h>

int replace(char *string);

void main (void){
    char string[20];
    int resultado;
    printf("Escreva uma palavra com ate 20 caracteres: ");
    scanf("%[^\n]", string);
    resultado = replace(string);
    printf("Resultado = %i", resultado);
}


int replace (char *string){
    int resultado=0;
    for(int i=0; i<strlen(string); i++)
        if(*(string+i) == ' ')
            resultado++;

    return resultado;
}
