#include <stdio.h>
#include <stdlib.h>

unsigned long fatorial (unsigned long int x);

 unsigned  long main(unsigned long argc, char *argv[]) {
    if (argc <2) {
        printf("Uso: %s e digite um número qualquer\n", argv[0]);
        return(0);
    }

    printf("Fatorial de %d eh : %d\n", atol(argv[1]), fatorial(atol(argv[1])));
    return(0);



}

unsigned long fatorial (unsigned long x) {
    if (x==0)
    {
        return(1);
    }

    if (x==1)
    {
        return(1);
    }

    return(x * fatorial(x-1));
    
    
}