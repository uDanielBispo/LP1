#include <stdio.h>

void main(void){
    int num=10, *pontNum;
    char letra='U', *pontLetra;

    pontNum=&num;
    pontLetra = &letra;

    printf("\nNum: %i", num);
    printf("\nLetra: %c\n", letra);

    printf("\nEndereco de Num: %p", &num);
    printf("\nEndereco de Letra: %p\n", &letra);

    printf("\npontNum: %p", pontNum);
    printf("\npontLetra: %p\n", pontLetra);

    printf("\nEndereco &pontNum: %p", &pontNum);
    printf("\nEndereco &pontLetra: %p\n", &pontLetra);

    printf("\nEndereco *pontNum: %p", *pontNum);
    printf("\nEndereco *pontLetra: %p\n", *pontLetra);

    printf("\nEndereco pontNum: %i", *pontNum);
    printf("\nEndereco pontLetra: %c\n", *pontLetra);

    scanf("%i", &num);
}
