#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void ValidacaoISBN(char *isnb);

void main (void){
    char entrada[12], *pEntrada = entrada;

    do{
        printf("Digite o ISBN do livro: ");
        gets(entrada);
        ValidacaoISBN(pEntrada);
    }while(strcmp(entrada, "fim") != 0);
}
void ValidacaoISBN(char *isnb){
    int soma1=0, soma2=0, aux=0;
    int ascNumbers[10] = {48,49,50,51,52,53,54,55,56,57};

    for(int i=0; i < strlen(isnb); i++){
        for(int j=0; j < 10; j++){
            if(*(isnb+i) == ascNumbers[j]){
                soma1 += ascNumbers[j]-48;
                break;
            }
            else if(*(isnb+i) == 'X'){
                soma1 += 10;
                break;
            }
            else if(*(isnb+i) == '-')
                continue;
        }
        if(*(isnb+i) == '-')
                continue;
        soma2+=soma1;
    }
    if(soma2%11==0)
        printf("O ISBN %s e valido\n\n", isnb);
    else
        printf("O ISBN %s e invalido\n\n", isnb);
}
/*
Válidos
013162959-X
089237010-6
156884030-6
013152447-X
081252030-0

Invalidos
123456789-0
292020202-0
013152447-X
111110111-1
*/
