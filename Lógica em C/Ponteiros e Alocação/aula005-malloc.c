#include <stdio.h>
#include <stdlib.h>

int main() {
    //Alocando um inteiro
    int *num = (int *)malloc(sizeof(int));
    *num = 10;
    printf("Valor inteiro: %d\n", *num);
    free(num);

    //Alocando um vetor de inteiros
    int *vetor = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        vetor[i] = i + 1;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    free(vetor);

    //Alocando uma estrutura
    struct Pessoa {
        int idade;
        float altura;
    };

    struct Pessoa *p = (struct Pessoa *)malloc(sizeof(struct Pessoa));
    p->idade = 20;
    p->altura = 1.75;
    printf("Idade: %d, Altura: %.2f\n", p->idade, p->altura);
    free(p);

    return 0;
}
