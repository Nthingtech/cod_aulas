#include <stdio.h>

int main(void)
{
    float meuArray[6];

    printf("Digite a nota do aluno 1: ");
    scanf("%f", &meuArray[0]);
    printf("Digite a nota do aluno 2: ");
    scanf("%f", &meuArray[1]);
    printf("Digite a nota do aluno 3: ");
    scanf("%f", &meuArray[2]);
    printf("Digite a nota do aluno 4: ");
    scanf("%f", &meuArray[3]);
    printf("Digite a nota do aluno 5: ");
    scanf("%f", &meuArray[4]);
    printf("Digite a nota do aluno 6: ");
    scanf("%f", &meuArray[5]);
    
    printf("--------------------------------------\n");

    printf("Nota do Aluno 1: %.1f\n", meuArray[0]);
    printf("Nota do Aluno 2: %.1f\n", meuArray[1]);
    printf("Nota do Aluno 3: %.1f\n", meuArray[2]);
    printf("Nota do Aluno 4: %.1f\n", meuArray[3]);
    printf("Nota do Aluno 5: %.1f\n", meuArray[4]);
    printf("Nota do Aluno 6: %.1f\n", meuArray[5]);
}