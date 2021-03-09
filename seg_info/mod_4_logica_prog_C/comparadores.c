#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;
	a=1;
	b=1;
	c=2;
	d=3;
	e=4;
	f=5;
	
	printf("Retorna verdadeiro(1) %d\n", a==b); //retorna 1 (verdadeiro)
	printf("Retorna falso(0) %d\n", b==c); //retorna 0 (falso)
	printf("Retorna falso(0) %d\n", a!=b); //retorna 0 (falso)
	printf("Retorna verdadeiro(1) %d\n", c!=f); //retorna 1 (verdadeiro)
	printf("Retorna verdadeiro(1) %d\n", d>a); //retorna 1 (verdadeiro)
	printf("Retorna falso(0) %d\n", d<a); //retorna 0 (falso)
	printf("Retorna verdadeiro(1) %d\n", d>=b); //retorna 1 (verdadeiro)
	printf("Retorna falso(0) %d\n", b>=d); //retorna 0 (falso)
	printf("Retorna verdadeiro(0) %d\n", b<=b); //retorna 1 (verdadeiro)
	printf("------------------------------------------------\n");
	
	
	
	
	return 0;
	

}
