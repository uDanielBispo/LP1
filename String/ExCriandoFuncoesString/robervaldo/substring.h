#ifndef SUBSTRING_H_INCLUDED
#define SUBSTRING_H_INCLUDED

#include <stdio.h>
#include <string.h>

void subString(char palavra[50], int posicaoInicial, int posicaoFinal, char destino[50]);

void subString(char palavra[50], int posicaoInicial, int posicaoFinal, char destino[50]){
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


#endif // SUBSTRING_H_INCLUDED
