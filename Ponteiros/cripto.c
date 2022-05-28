#include <stdio.h>
#include <string.h>
#include <locale.h>

void Cripto(char *string, char *criptografada);

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int tam=3000;
    char texto1[tam], texto2[tam], texto3[tam];
    printf( "Informe um texto de até 8 caracteres: " );
    gets(texto1);
    //scanf( "%[^\n]", texto1 );
    Cripto( texto1, texto2 );
    Cripto( texto2, texto3 );
    printf( "O texto criptografado é: \n\n%s\n\n e descriptografado é: \n\n%s\n\n", texto2,texto3 );
    return 0;
}

void Cripto(char *string, char *criptografada){
    char ctrl1[54] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char ctrl2[54] = {"!@#$%¨&*();+1234567890-=/`{}[]°^~´'<>|§£¹²³¢¬ªºZYXWV"};

    for(int i=0; i<=strlen(string); i++)
        if(i==strlen(string)){
            *(criptografada+i) = '\0';
            break;
        }
        else
            *(criptografada+i) = *(string+i);


     for(int z=0; z<strlen(criptografada); z++){
        for(int j=0; j<strlen(ctrl1); j++){
            if(*(criptografada+z) == ctrl1[j]){
                *(criptografada+z) = ctrl2[j];
                break;
            }
            else if(*(criptografada+z) == ctrl2[j]){
                *(criptografada+z) = ctrl1[j];
                break;
            }

        }
    }
}


