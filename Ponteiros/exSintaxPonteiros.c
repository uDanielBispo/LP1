#include <stdio.h>

/*
    2)Se i e j, mat[5]={1,2,3,4,5}são variáveis inteiras e pe qsão ponteirospara inteiros,
    quais das seguintes expressões de atribuição são ilegais?
        a) p = mat;
        b) q = &p;
        c) q=&j;
        d) *q = &j;
        d) i = (*&)j;
        e) i = (++*p)  + (*q)
*/

void ex4(int *px);

void main (void){
    int i, j, mat[5] = {1,2,3,4,5};
    int *p, *q;
    int x=10;

    p = mat;
    printf("01- %p\n", p);
    printf("02- %p\n", q);
    printf("01- %i\n", *p);
    printf("02- %i\n\n", *q);

    q = &p; //tipo incompativel, precisa ser ponteiro de ponteiro para fazer isso
    printf("03- %p\n", p);
    printf("04- %p\n", q);
    printf("03- %i\n", *p);
    printf("04- %i\n\n", *q);

    q=&j;
    printf("05- %p\n", p);
    printf("06- %p\n", q);
    printf("05- %i\n", *p);
    printf("06- %i\n\n", *q);

    *q = &j; //*q é o valor dentro da memoria
    printf("07- %p\n", p);
    printf("08- %p\n", q);
    printf("07- %i\n", *p);
    printf("08- %i\n\n", *q);

    i = *&j;
    printf("09- %p\n", p);
    printf("10- %p\n", q);
    printf("09- %i\n", *p);
    printf("10- %i\n\n", *q);

    i = (++*p)  + (*q);
    printf("11- %p\n", p);
    printf("12- %p\n", q);
    printf("11- %i\n", *p);
    printf("12- %i\n\n", *q);

    ex4(&x);
    printf("%i\n\n",x);
}

void ex4(int *px){
    *px /= 2;
}
