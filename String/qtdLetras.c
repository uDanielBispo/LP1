#include <stdio.h>

void main(void){
    char
    string[50],
    letraProcurada;

    int
    qtdLetra=0,
    i=0;

    printf("informe uma palavra: ");
    gets(string);
    printf("informe uma letra: ");
    scanf(" %c", &letraProcurada);

    while(string[i] != '\0'){
        if(string[i] == letraProcurada)
            qtdLetra++;
        i++;
    }

    printf("Quantidade de letras '%c': %i", letraProcurada, qtdLetra);
}
