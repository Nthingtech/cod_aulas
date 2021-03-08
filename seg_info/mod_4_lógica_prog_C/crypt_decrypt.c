#include <stdio.h>


int main(void)
{
    char word[50];
    char crypt[50];
    char respUser;
    int x;

    printf("Você deseja [c]criptografar ou [d]descriptografar? \n");
    scanf("%c", &respUser);

    if (respUser == 'c')
    {
        printf("Digite algo para criptografar: \n");
        scanf("%49s", &word);
        printf("Palavra criptografada: \n");
        for (x = 0; x < strlen(word); x++)
        {
            printf("%c", word[x] +3);

        }      

    }
    
    else if (respUser == 'd')
    {
        printf("Insira algo para descriptografar\n");
        scanf("%49s", &crypt);
        printf("Palavra descriptografada: \n");
        for ( x = 0; x < strlen(crypt); x++)
        {
            printf("%c", crypt[x] -3);
        }    

    }
    
    else
    {
        printf("Digite uma opção válida\n");
    }
    
    printf("\n");

    return 0;
    
}