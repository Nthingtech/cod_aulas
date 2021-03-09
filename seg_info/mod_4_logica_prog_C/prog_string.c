#include <stdio.h> 

int main (void) {

    char nome [15];

    printf("Digite o seu nome: ");
    scanf("%14s", &nome);

    printf("O nome digitado foi: %s\n", nome);
    printf("----------------------------\n");

    return 0;
}
