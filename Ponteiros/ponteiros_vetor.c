#include <stdio.h>

void main(void){
    int vetInt[5] = {10,20,30,40,50};
    char vetChar[5] = {"Bispo"};

    printf("Nome do vetor: %p\n", vetInt);
    printf("Nome do vetor: %p\n\n", vetChar);

    for(int i=0; i<5; i++){
        printf("Valor: %i Posicao: %p\n", *(vetInt+i), vetInt+i);
    }
    printf("\n");
    for(int i=0; i<5; i++){
        printf("Valor: %c Posicao: %p\n", *(vetChar+i), vetChar+i);
    }


}
