#include <stdio.h>

int func(int a[10], int b);

void main(void){
    int
    temp,
    a[10]={1,2,3,4,5,6,7,8,9,10},
    b=10;
    printf("%i", func(a, b));
}

int func(int a[10], int b) {
        int temp;
        temp = a[0];
        a[0] = b;
        b = temp;
        return a[1];
}
