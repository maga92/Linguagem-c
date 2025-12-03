#include <stdio.h>

int main(void) 
{
    int n;
    printf("Quantos números vai digitar? ");
    scanf("%d", &n);

    int vetor[n], resultado[n], k = 0;

    printf("Digite os números:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] >= 0) {
            resultado[k++] = vetor[i];
        }
    }

    printf("Números sem negativos:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}
