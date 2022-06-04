# include <stdio.h>
# include <string.h>

void subString(char *p, char *c1, char *c2);

int main(){
    char texto[20], c1, c2;

    printf("Digite o texto: ");
    gets(texto);

    printf("Digite o caractere: ");
    scanf(" %c", &c1);

    printf("Digite o caractere que substituira: ");
    scanf(" %c", &c2);

    subString(texto, &c1, &c2);
}

void subString(char *p, char *c1, char *c2){
    for(int i=0; i<strlen(p); i++)
        if(*(p+i) == *c1)
            *(p+i) = *c2;
    printf("\n%s\n", p);
}
