//Crie uma função que recebe um vetor de floats e calcule a soma dos elementos
//

#include <stdio.h>

float somaVetor (float vetor[], int tamanho)
{
   float soma = 0;
       for(int i = 0; i < tamanho; i++)
         soma = soma + vetor[i];

  return soma;
}

 int main (void)
 {
    int tamanho;

    printf("qual o tamanho do vetor? \n");
       scanf("%d", &tamanho);

    float numeros[tamanho];

    for(int i = 0; i < tamanho; i++){
      printf("Digite o valor da posição %d \n", i + 1);
       scanf("%f", &numeros[i]);
}

float result = somaVetor(numeros, tamanho);

printf("A soma dos elementos é: %.3f!", result);
 }