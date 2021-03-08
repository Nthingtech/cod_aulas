#include <stdio.h>

int main (void) {
    char c = 'a';
    char senha = 'b';
    int cript = 0;

    printf("Letra original: %c\n", c );
    printf("Senha: %c\n", senha);
    cript = c^senha;
    printf("Letra com xor: %x\n", cript);
    printf("Resultado xor senha: %c\n", cript^senha);
    

	    return 0;
}

