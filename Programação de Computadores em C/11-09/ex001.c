//Faça uma função recursiva que permita calcular a média um vetor de tamanho N.
//
#include <stdio.h>

// Função recursiva para calcular a soma dos elementos
float soma(float v[], int n) {
    if (n == 0) return 0;
    return v[n-1] + soma(v, n-1);
}

// Função para calcular a média usando a soma recursiva
float media(float v[], int n) {
    return soma(v, n) / n;
}

int main(void) {
    int n, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float v[n];
    for (i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i+1);
        scanf("%f", &v[i]);
    }

    printf("Media = %.2f \n", media(v, n));
    return 0;
}