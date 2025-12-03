//Crie uma função que recebe um vetor de inteiros e calcule a soma dos elementos
//

#include <stdio.h>
int somaVetor (int vetor[], int tamanho)
{
int soma = 0;
for (int i = 0; i < tamanho; i++){
    soma = soma + vetor[i];
}
return soma;
}


 int main (void)
 {

    int tamanho;

    printf("Qual o tamanho do vetor? \n");
     scanf("%d", &tamanho);

     int numeros[tamanho];

      for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor da posicao %d: ", i + 1);
          scanf("%d", &numeros[i]);
    }

    
int resultado = somaVetor(numeros, tamanho);

  printf("A soma dos elementos é: %d\n", resultado);

 }