//Escreva um vetor[10], que preencha as 10 primeiras posiçoes com números pares.
//
#include <stdio.h>

int main(void) {
    int i;
    int pares[10];

    for (i = 0; i < 10; i++) {
        pares[i] = i * 2;  // Gera números pares
    }

    // Exibir os números pares
    printf("Os primeiros 10 números pares são:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    return 0;
}
