#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cripto(char *string);

void main(void){
    char vetChar[100];
    printf("informe uma frase ou palavra: ");
    gets(vetChar);
    cripto(vetChar);
    printf("\nInvertida: %s", vetChar);
}

void cripto(char *string){
    char consoantes[] = {"BCDFGHJKLMNPQRSTVWXYZ"};
    strupr(string);

    for(int i=0; i<strlen(string); i++){
        for(int z=0; z<strlen(consoantes); z++){
            if(string[i] == consoantes[z]){
                string[i] = '#';
            }
        }
    }
    strrev(string);
    //printf("%s", string);
}
