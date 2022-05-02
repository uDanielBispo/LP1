#include <stdio.h>
#include <string.h>
#include "substring.h"

//Paulo Gileandes da Silva
//Rayane Estéfane de Almeida Pereira

void ultimoEPrimeiroNome(char nome[50]);

void main(void){
    char nome[50];

    printf("Escreva seu nome: ");
    gets(nome);
    ultimoEPrimeiroNome(nome);
}

void ultimoEPrimeiroNome(char nome[50]){

    int  primeiroEspaco, ultimoEspaco;
    char primeiroNome[50], ultimoNome[50];

    for(int i=0; i<strlen(nome); i++)
        if(nome[i] == ' '){
            primeiroEspaco = i;
            break;//IMPORTANTE
        }
    for(int i=strlen(nome)-1; i>=0; i--)
        if(nome[i] == ' '){
            ultimoEspaco = i;
            break;//IMPORTANTE
        }

    subString(nome, 0, primeiroEspaco, primeiroNome);
    subString(nome, ultimoEspaco+1, strlen(nome)-1, ultimoNome);

    printf("%s, %s", ultimoNome, primeiroNome);
}

