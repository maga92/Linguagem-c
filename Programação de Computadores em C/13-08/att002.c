//Leia uma matriz 2x4 e calcule a soma de cada linha.
//
#include <stdio.h>
int main ()
{
    int matriz[2][4];
    int linha, coluna;
    int soma;

    for (linha = 0; linha < 2; linha++) {
        for (coluna = 0; coluna < 4; coluna++) {
            printf("Digite matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for (linha = 0; linha < 2; linha++) {
        soma = 0;
        for (coluna = 0; coluna < 4; coluna++) {
            soma += matriz[linha][coluna];
        }
        printf("Soma da linha %d: %d\n", linha,soma);
    }

    return 0;
}