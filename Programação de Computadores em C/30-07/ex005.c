#include <stdio.h>

int main(void) {
    int matriz[2][2];
    int i, j;

    // Entrada dos valores
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Informe o valor [%i][%i]: ", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
        }
    }

    // Impressão da matriz
    printf("\nMatriz digitada:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
