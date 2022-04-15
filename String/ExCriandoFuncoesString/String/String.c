#include <stdio.h>

void main(void){
    char
    vetorChar[50];

    printf("Informe um nome: ");
    //scanf("%s", vetorChar);
    gets(vetorChar);

    printf("\nNome: %s", vetorChar);
}
