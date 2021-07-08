#include <stdio.h>

int incrementa (int a ) {
    printf("Como chegou: %d\n", a);
    a=a+1;
    a++;
    a+=1; //É igual a: a=a+1
    printf("Como a ficou: %d\n", a);
    return (a);
}

int main () {
    int x = 15;

    printf("Antes do incrementa: %d\n", x);
    printf("Retorno do incrementa: %d\n", incrementa(x));
    printf("Depois do incrementa: %d\n", x);
    

}

