#include <stdio.h>
#include <string.h>

void main(void){
    char palavra[20], destino[20];
    int posicaoInicial, posicaoFinal;

    gets(palavra);
    scanf("%i", &posicaoInicial);
    scanf("%i", &posicaoFinal);

    subString(palavra, posicaoInicial, posicaoFinal, destino);
    printf("%s", destino);
}

void subString(char palavra[20], int posicaoInicial, int posicaoFinal, char destino[20]){
    int caminhoPercorrido = posicaoFinal - posicaoInicial;

    for(int i=0; i<=caminhoPercorrido && posicaoInicial <= posicaoFinal ; i++){
        destino[i] = palavra[posicaoInicial];
        posicaoInicial++;
    }
    destino[caminhoPercorrido+1] = '\0';


}
