#include <stdio.h>
#include <string.h>


void subString(char palavra[11], char letra1, char letra2);

void main(void){
    char palavra[11],  letra1,  letra2;
    gets(palavra);
    scanf(" %c", &letra1);
    scanf(" %c", &letra2);

    subString(palavra, letra1, letra2);
}


void subString(char palavra[11]/*11 = 10 + \0 */,
                char letra1, char letra2){

    for(int i=0; i<strlen(palavra); i++)
    {
        palavra[i] = tolower(palavra[i]);
        letra1 = tolower(letra1);

        if(palavra[i] == letra1)
            palavra[i] = letra2;
    }
    printf("%s", palavra);
}
