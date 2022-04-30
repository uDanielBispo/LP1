#include <stdio.h>
#include <string.h>
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

    int enderecoEspaco1, enderecoEspaco2, z=0;
    char primeiroNome[50], ultimoNome[50];

    strcpy(primeiroNome, nome);

    for(int i=0; i<strlen(nome); i++)
        if(nome[i] == ' '){
            primeiroNome[i] = '\0';
            break;
            primeiroNome[i] = nome[i];
        }

    for(int i=strlen(nome); i>0; i--)
        if(nome[i] == ' '){
            enderecoEspaco2 = i;
            break;
        }

    for(int i = enderecoEspaco2+1; i < strlen(nome); i++, z++)
        ultimoNome[z] = nome[i];

    ultimoNome[z] = '\0';
    printf("%s, %s", ultimoNome, primeiroNome);
}

