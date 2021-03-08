#include <stdio.h>

int main(void) {
    int x1, x2, x3, x4, x5, x6, x7;
    x1 = 1;
    x2 = 1;
    x3 = 1;
    x4 = 1;
    x5 = 1;
    x6 = 1;
    x7 = 1;

    printf("x1= %d\n", x1);
    printf("Deslocamento á esquerda x1<<1= %d\n", x1 << 1);
    printf("x1*2 = %d\n", x1 * 2 );
    printf(" \n");

    printf("x2= %d\n", x2);
    printf("Deslocamento á esquerda x2<<2= %d\n", x2 << 2);
    printf("x2*4 = %d\n", x2 * 4 );
    printf(" \n");

    printf("x3= %d\n", x3);
    printf("Deslocamento á esquerda x3<<3= %d\n", x3 << 3);
    printf("x3*8 = %d\n", x3 * 8 );
    printf(" \n");
        

    printf("x4= %d\n", x4);
    printf("Deslocamento á esquerda x4<<4= %d\n", x4 << 4);
    printf("x4*16 = %d\n", x4 * 16 );
    printf(" \n");
        
    printf("x5= %d\n", x5);
    printf("Deslocamento á esquerda x5<<5= %d\n", x5 << 5);
    printf("x5*32 = %d\n", x5 * 32 );
    printf(" \n");
        

    printf("x6= %d\n", x6);
    printf("Deslocamento á esquerda x6<<6= %d\n", x6 << 6);
    printf("x6*64 = %d\n", x6 * 64 );
    printf(" \n");
        
    printf("x7= %d\n", x7);
    printf("Deslocamento á esquerda x7<<7= %d\n", x7 << 7);
    printf("x7*2 = %d\n", x7 * 128 );
    printf(" \n");
        

    return 0;
}


