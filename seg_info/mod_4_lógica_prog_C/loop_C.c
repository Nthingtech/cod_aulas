#include <stdio.h>

int main(void)
{
    int x=0;
    printf("Antes do while \n");
    while (x<=10)
    {
        printf("%d \n", x);
        x++;
    }
    
    printf("Depois do while \n");

    return 0;
}