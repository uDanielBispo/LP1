#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include "substring.h"

void inserir(char *p1, char *p2, int pos);

int main (void){
    int pos;
    char palavra1[50], palavra2[50];

    do{
        printf("Digite a posicao: ");
        scanf("%i", &pos);

        if(pos==0)
            break;

        fflush(stdin);
        printf("Digite a primeira palavra: ");
        gets(palavra1);

        fflush(stdin);
        printf("Digite a segunda palavra: ");
        gets(palavra2);

        inserir(palavra1, palavra2, pos);
    }while(pos != 0);
}
void inserir(char *p1, char *p2, int pos){
    char backup[50];
    int i=0;

    subString(p1, pos, strlen(p1), backup);

    for(i; i<=strlen(p2);i++){
        *(p1+pos) = *(p2+i);
        pos++;
    }
    for(int i=strlen(p1), j=0; i<(strlen(p1)+strlen(backup)); i++){
        *(p1+i) = backup[j];
        j++;
    }
    printf("A palavra com a insersao fica: %s\n\n", p1);
}
