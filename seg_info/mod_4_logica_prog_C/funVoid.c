#include <stdio.h>
#include <stdlib.h>

void soma(int a, int b);

int main(int argc, char *argv[]){
    int x = 0;
    int z = 0;
    printf("Insira um número: ");
    scanf("%d", &x);
    printf("Insira outro número: ");
    scanf("%d", &z);
    soma(x, z);
    return (0);
}

void soma(int a, int b){
    printf("Resultado: %d\n", a+b);
}