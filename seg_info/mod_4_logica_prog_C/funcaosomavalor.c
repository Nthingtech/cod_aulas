#include <stdio.h>
/*As funções podem ser construídas antes ou depois da main. Caso seja construída depois da main, a função deve ser declarada antes da main.
Senão é só construíla antes da main (início do código)  */

int soma(int a, int b) {
    return (a + b);
}
int main() {
    int x = 0;
    int y = 0;
    int resultado = 0;

    printf("Digite o valor da variável 1: ");
    scanf("%d", &x);

    printf("Digite o valor da variável 2: ");
    scanf("%d", &y);

    resultado = soma (x, y);
    printf("O resultado da soma eh: %d \n", resultado);

    return(0);


}


