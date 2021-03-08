#include <stdio.h>

int main (void){

    int x;
    char nome[50];

    printf("Digite qualquer palavra com a letra A e sem espaços: ");
    scanf("%49s", nome);

    for ( x = 0; x < 49; x++)
    {
        if(nome[x] == 0) {
            break;
        }

        if (nome[x] == 'a')
        {
            continue;
        }
        
        printf("%c", nome[x]);
    }
    
    printf("\n");
    
    
    return 0;
}