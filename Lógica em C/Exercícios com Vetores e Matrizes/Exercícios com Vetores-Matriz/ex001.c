#include <stdio.h>

int main(void)
{
    int vetor[10];
    int i;

    
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Valores na ordem inversa:\n");
    for (i = 10; i >= 0; i--) {
        printf("%d", vetor[i]);
    }
    printf("\n");

    return 0;
}


