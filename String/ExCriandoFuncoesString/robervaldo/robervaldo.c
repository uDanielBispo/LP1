#include <stdio.h>
#include <string.h>

void main(void){
    char palavra[20], destino[20];
    int posicaoInicial, posicaoFinal, tamanhoPalavra = strlen(palavra);
    
    printf("Digite a palavra: ");
    gets(palavra);   
    fflush(stdin);
    printf("\nDigite a posicao incial: ");
    scanf("%i", &posicaoInicial);
    printf("\nDigite a posicao final: ");
    scanf("%i", &posicaoFinal);

    subString(palavra, posicaoInicial, posicaoFinal, destino);
    printf("%s", destino);
}

void subString(char palavra[20], int posicaoInicial, int posicaoFinal, char destino[20]){
    int caminhoPercorrido = posicaoFinal - posicaoInicial;

    if(caminhoPercorrido > 0)
    {
        for(int i=0; i<=caminhoPercorrido && posicaoInicial <= posicaoFinal ; i++){
            destino[i] = palavra[posicaoInicial];
            posicaoInicial++;
        }
        destino[caminhoPercorrido+1] = '\0';
    }
    else
    strcpy(destino, "posicao inicial maior do que a posicao final");
}
