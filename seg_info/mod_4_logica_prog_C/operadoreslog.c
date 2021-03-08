#include <stdio.h>

//programa para fixar conhecimentos de operadores lógicos

int main()
{

	int a=1;
	int b=2;
	int c=3;
	int d=4;
	int e=0;
	int f=0;
	int g=-2;
	
	//verdadeiro = 1 e falso = 0
	
	printf("Retorna verdadeiro: %d\n", a && b);
	printf("Retorna verdadeiro: %d\n", a && g); //lembrando que 0 é falso (booleano
	printf("Retorna falso: %d\n", c && e);
	printf("Retorna verdadeiro: %d\n", a || e);
	printf("Retorna verdadeiro: %d\n", b || c);
	printf("Retorna falso: %d\n", e || f);
	printf("Retorna verdadeiro: %d\n", a || g); //lembrando que 0 é falso (booleano) 
	printf("Retorna verdadeiro: %d\n", !e); // inverte o valor booleano
	printf("Retorna falso: %d\n", !b); // inverte o valor booleano
	
	
	return 0; // retorna que está tudo ok!
}
	
