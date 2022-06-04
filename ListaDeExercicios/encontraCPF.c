#include <stdio.h>
#include <string.h>
#include <conio.h>

void achaCpf(char *s,char *cpf);
float somaFaturas(char *s);

void main (void){
    int qtdClientes;
    char string[70], cpf[12];
    float somaFaturas;

    printf("Digite o numero de clientes: ");
    scanf("%i", &qtdClientes);

    for(int i=0; i<qtdClientes; i++){
        printf("Esqcreva o texto do %io funcionario: ", i+1);

        fflush(stdin);
        gets(string);

        achaCpf(string, cpf);
        printf("\nCPF: %s\n\n", cpf);

        //somaFaturas = soma();
    }


}

void achaCpf(char *s,char *cpf){

    for(int i=0, j=0; i<strlen(s); i++){
        if(*(s+i)>=48 && *(s+i)<=57){
            *(cpf+j) = *(s+i);
            j++;
            if(j==11)
                break;
        }
    }
    *(cpf+11) = '\0';

}

float somaFaturas(char *s){

}
