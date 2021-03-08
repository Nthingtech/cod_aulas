#include <stdio.h>

int main()
{
	float valor1, valor2;
	char operador;
	
	printf("Selecione a operação matemática:\n");	
	printf("Soma digite: + \n");
	printf("Subtração digite: - \n");
	printf("Multiplicação digite: * \n");
	printf("Divisão digite: / \n");
	scanf("%c", &operador);
	
	if (operador == '+'){
		printf("Digite um número:");
		scanf("%f", &valor1);
		printf("Digite outro número:");
		scanf("%f", &valor2);
		printf("O resultado da soma é: %f \n", valor1 + valor2);	
		
	}
	
	else if (operador == '-'){
		printf("Digite um número:");
		scanf("%f", &valor1);
		printf("Digite outro número:");
		scanf("%f", &valor2);
		printf("O resultado da subtração é: %f \n", valor1 - valor2);	
		
	}
	
	else if (operador == '*'){
		printf("Digite um número:");
		scanf("%f", &valor1);
		printf("Digite outro número:");
		scanf("%f", &valor2);
		printf("O resultado da multiplicação é: %f \n", valor1 * valor2);	
		
	}
	
	else if (operador == '/'){
		printf("Digite um número:");
		scanf("%f", &valor1);
		printf("Digite outro número:");
		scanf("%f", &valor2);
		printf("O resultado da divisão é: %f \n", valor1 / valor2);	
		
	}
	
	else{
		printf("Cara, acho que você tá meio perdido...tente outra vez \n");
				
	}

	return 0;
}
