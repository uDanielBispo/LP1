#include <stdio.h>

void main (void)
{
    char string[50];
    int
    consoantes = 0,
    vogais = 0,
    i;

    gets(string);

    for(i=0; i<50; i++)
    {
        if(string[i]=='\0')
            break;

        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||
           string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
            vogais++;
        else
            consoantes++;

    }

    printf("\nQuantidade de vogais: %i\nQuantidade de consoantes: %i\n", vogais, consoantes);
}
