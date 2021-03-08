#include <stdio.h>

int main()
{
	int a, b;
	a=5;
	b=4;
	
	
	
	printf("Soma: %d\n", a + b);
	printf("Subtração: %d\n", a - b);
	printf("Divisão: %.2f\n",(float) a / b);
	printf("Resto: %d\n", a % b);
	printf("Multiplicação: %d\n", a * b);
	a++;
	printf("Incremento: %d\n", a);
	b--;
	printf("Decremento: %d\n", b);
	
	return 0;
}
	
