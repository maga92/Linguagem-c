// 5 - É o exercicio quatro, mas copie os elementos em ordem inversa
// 6 - Mostre, quantos negativos foram encontrados e soma de todos os números informados

#include <stdio.h>

int main(){
    int vetor1[10];
    int vetor2[10];
    int j = 0;
    int contador = 0;
    int soma = 0;

    for(int i = 0; i < 10; i++){
        printf("Coloque dez valores: ");
        scanf("%d", &vetor1[i]);
    }

    for(int i = 9; i >= 0; i--){
        vetor2[i] = vetor1[j];
        j++;
        
        soma += vetor1[i];  // Soma todos os números

        if(vetor1[i] < 0){
            contador++;
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%d\n", vetor2[i]);
    }

    printf("Qtd de negativos: %d\n", contador);
    printf("Soma de todos os valores: %d\n", soma);

    return 0;
}
