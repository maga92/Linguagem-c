//Exercício 6.
//Leia um vetor de inteiros de 5 posições e ao final, mostre o maior e o menor número
//
#include <stdio.h>
#define TAM 5
 int main (void)
 {
int vet[TAM];

printf("digite 5 números inteiros: \n");
for(int i = 0; i<TAM; i++){
    scanf("%d", &vet[i]);
}

int maior, menor;
maior = menor = vet[0];
for(int i = 0; i<TAM; i++){
    if(maior < vet[i]){
        maior = vet[i];
    }
    if(vet[i] < menor){
    menor = vet[i];
}
  }
  printf("Maior: %d | Menor: %d \n", maior, menor);
 }