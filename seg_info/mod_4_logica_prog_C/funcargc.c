#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

	int resultado = 0;

	if (argc<3)
	{
		printf("Uso: %s var1 var2\n", argv[0]);
		return(0);
	}

	if (argc>3)
	{
		printf("Uso: %s var1 var2\n", argv[0]);
		printf("Esse programa só soma dois números!\n");
		return(0);
	}

	resultado = atoi(argv[1]) + atoi(argv[2]);
	printf("Resultado: %d\n", resultado);

	
	
	
	return(0);

}