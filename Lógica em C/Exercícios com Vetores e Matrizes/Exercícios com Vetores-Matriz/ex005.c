#include <stdio.h>

int main() {
    int notas[5][5];

    printf("Digite as notas dos 5 alunos em 5 provas:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &notas[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        int maior = notas[i][0];
        int menor = notas[i][0];

        for (int j = 1; j < 5; j++) {
            if (notas[i][j] > maior) maior = notas[i][j];
            if (notas[i][j] < menor) menor = notas[i][j];
        }

        printf("Aluno %d - Maior nota: %d, Menor nota: %d\n", i + 1, maior, menor);
    }

    return 0;
}
