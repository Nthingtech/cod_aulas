#include <stdio.h>

int main (void) {
    char nome[15];
    char senha[15];

    printf ("Digite sua senha: ");
    scanf("%14s", senha);
    printf ("A senha digitada foi: %s \n", senha);
    printf ("Digite seu nome: ");
    __fpurge(stdin); //usado somente no linux. já no windows é o fflush(stdin)//    
    scanf ("%14s", nome);
    printf ("Seu nome é: %s \n", nome);
    printf ("Seu senha agora é: %s \n", senha);

    return 0;
}
