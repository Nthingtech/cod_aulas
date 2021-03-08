#include <stdio.h>
#include <stdlib.h>


int main (void) {

	char nome [15];
	char senha [15];
	
	printf("Digite sua senha: ");
	scanf("%14s", senha);
	printf("A senha digitada foi: %s\n ", senha);
	printf("Digite seu nome: ");
	scanf("%14s", nome);
	printf("Seu nome eh: %s\n ", nome);
	printf("Sua senha agora eh: %s\n ", senha);
	
	
	return 0; 	

}
