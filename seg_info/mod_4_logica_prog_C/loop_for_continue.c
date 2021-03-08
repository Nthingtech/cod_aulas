#include <stdio.h>

int main(void)
{
    
    int x;

    printf("Uso da função continue\n");

    
    for (x=0; x<50; x++)
    {
        if (x % 3 != 0)
        {
            continue;
        }

        printf("%d ", x);
        
             
    
    }
    
    printf("\nFim do Programa");

    return 0;
}