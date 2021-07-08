#include <stdio.h>

int * incrementa(int *a);

int main() {

    int x = 15;

    printf("Antes do incrementa: %d\n", x);
    printf("Retorno do incrementa: %d\n", * (incrementa(&x)) ); //
    printf("Depois do incrementa: %d\n", x);

}

int * incrementa(int *a) {
    printf("Como a chegou: %d\n", *a);
    *a=*a+1;
    (*a)++;
    *a+=1; // a=a+1;
    printf("Como a ficou: %d\n", *a);
    return(a);
}

//argumentos por referência. Se mudar o valor da variável dentro da função, ela muda o valor da variável original. Passa o endereço de memória da variável.