#include <stdio.h>
#include <math.h>



int main()
{
  
	float a, b, c, delta, raiz1, raiz2, raiz3;
	
	   
	printf("Digite o valor de a: \n");	
	scanf("%f", &a); 
 
	printf("Digite o valor de b: \n");	
	scanf("%f", &b);
  
	printf("Digite o valor de c: \n");	
	scanf("%f", &c); 
  
	delta = pow(b, 2) - 4 * a * c;  
	
 
	if (delta == 0){
  
		raiz1 = (-b + sqrt(delta)) / (2 * a);
  		printf("A única raiz é: %f \n", raiz1);
  
	}
  
	else if (delta<0){
		printf("Esta equação não possui raízes reais \n");
  	
	}
  
	else{
  
		raiz2 = (-b + sqrt(delta)) / (2 * a);
		raiz3 = (-b - sqrt(delta)) / (2 * a);
  
		printf("A primeira raiz é: %f \n", raiz2);
		printf("A segunda raiz é: %f \n", raiz3);
  	
	}
  
	return 0;
}
