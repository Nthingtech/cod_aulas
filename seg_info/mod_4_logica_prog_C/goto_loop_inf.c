#include <stdio.h>

int main (void){

    int x = 0;

    Aqui:

        printf("%X\n", x);
        x++;
        if (x<15) goto Aqui;
        printf("Acabou\n");


    return 0;




}