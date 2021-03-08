#include <stdio.h>

int main(void)
{
    char nome[50];
    int x;

    printf("Digite seu nome: ");
    scanf("%49s", nome);
    
    for (x=0; x<49; x++)
    {
        if (nome[x]==0)
        {
            break;
            
            
        }
        printf("%c", nome[x]);
             
    
    }
    printf("\n");
    

    return 0;
}