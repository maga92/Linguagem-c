//Exercício 10.
//Implemente uma função que recebe um vetor de int de 10 posições e retorne qual o maior número dentro desse vetor
//
#include <stdio.h>
#define TAM 10
 int main (void)
 {
    int vetor[TAM];
    printf("Digite 10 números: \n");
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    int maior;
    for(int i = 0; i<TAM; i++){
    if(maior < vetor[i]){
        maior = vetor[i];
 }
}

printf("O maior número é: %d \n", maior);
    
 }