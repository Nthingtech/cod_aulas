#include <stdio.h>

int main()
{
	int a=4;
	
	if (a>6){
	
		printf("A é maior que 4\n");
	}
	
	else if (a<3){
	
		printf("A é menor que 4\n");
	
	}
	
	
	else if (a==6){
	
		printf("A é igual a 6\n");
	}

	else if (a>4 && a<6){
	
		printf("A está entre 4 e 6\n");
	}

	else{
	
	printf("Aí eu já não sei de mais nada\n");
	
	}


	return 0;

}
