#include <stdio.h>

int main() {
    int matriz[2][2] = {{1, 2},{3, 4}};

    int i, j, soma = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            soma = soma + matriz[i][j];
        }
    }

    printf("Soma: %d\n", soma);

}