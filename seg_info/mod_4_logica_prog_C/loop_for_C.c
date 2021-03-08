#include <stdio.h>

int main(void)
{
    int x=0;
    printf("Antes do for \n");
    for (x=0; x<=10; x++)
    {
        printf("%d \n", x);
        x++;
    }
    
    printf("Depois do for \n");

    return 0;
}