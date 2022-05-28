#include <stdio.h>

void main(void){
    char *p , vetChar[6] = {"Bispo"};

    printf("\nvetChar: %s", vetChar);
    p=vetChar;
    //vetChar[0]; vetChar;
    while(*p != '\0'){
        printf("\n%c %p", *p, p);
        p++;
    }
    printf("\n");
    for(int i =0; i< strlen(vetChar); i++){
        printf("\n%c %p", *(vetChar+i), vetChar+i);

    }
}
