#include <stdio.h>

int main(void) {
    char letra = 'Y';         // cria a variável
    char *pletra = &letra;    // ponteiro aponta para letra

    printf("Valor inicial de letra: %c\n", letra);

    *pletra = 'Z';
    printf("Depois de mudar pelo ponteiro: %c\n", letra);

    letra = 'X';
    printf("Depois de mudar sem ponteiro: %c\n", letra);

    printf("Endereco de letra: %p\n", &letra);
    printf("Endereco armazenado em pletra: %p\n", pletra);

    return 0;
}
