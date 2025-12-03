//Crie um programa que tenha uma função que receba um vetor de inteiros e que ele
//calcule quantos elementos do vetor são positivos, negativos ou zeros.


#include <stdio.h>

int somaVetor (int vetor[], int tamanho)
{
   int soma = 0;
       for(int i = 0; i < tamanho; i++)
         soma = soma + vetor[i];

  return soma;
}

 int main (void)
 {
    int tamanho;
     int negativos = 0;
      int positivos = 0;
       int zeros = 0;
    


    printf("qual o tamanho do vetor? \n");
       scanf("%d", &tamanho);

    int numeros[tamanho];

    for(int i = 0; i < tamanho; i++){
      printf("Digite o valor da posição %d \n", i + 1);
       scanf("%d", &numeros[i]);

       if(numeros[i] < 0){
        negativos++;
}
       if(numeros[i] > 0){
        positivos++;
}
       if(numeros[i] == 0){
        zeros++;
    
 }
 }
 printf("\n");
 printf("seu  vetor tem %d números, sendo eles: \n", tamanho);
 printf("%d negativos\n", negativos);
   printf("%d positivos\n", positivos);
     printf("e %d iguais a zero\n", zeros);
}
