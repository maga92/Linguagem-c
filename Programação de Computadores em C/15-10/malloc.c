//
//

#include <stdio.h>
#include <stdlib.h>
 int main (void)
 {
    int num;
    int *vetor;
    printf("Tamanho do vetor? \n");
    scanf("%d", &num);

    vetor = (int *) malloc(num * sizeof(int)); // num vezes o tamanho de uma variável inteira.

    if (vetor == NULL){
        printf("Sem espaço na memória");
    }

    for(int i = 0; i<num;i++)
    {
printf("Digite o valor %d \n", i+1),
   scanf("%d",&vetor[i]);
    }

    printf("Valores armazenados -------------- \n");

    for(int i = 0; i < num; i++)
    {
printf("%d: %d \n",i+1, vetor[i]);
    }
free(vetor); 


 }