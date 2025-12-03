//Exercício 1.
//Leia 10 números inteiros e conte quantos são positivos, negativos e zeros
//
#include <stdio.h>
#define TAM 10
 int main (void)
 {
int valor[TAM];

printf("Digite dez valores:\n");
  for(int i = 0; i<TAM; i++)
    scanf("%i", &valor[i]);

     printf ("números maiores que zero: \n");
  for(int j=0; j<TAM; j++){
    if(valor[j] > 0)
    printf("%i \n", valor[j]);
  }
   
            printf ("Zero: \n");
  for(int j=0; j<TAM; j++){
    if(valor[j] == 0)
    printf("%i \n", valor[j]);
  }

  printf ("números menores que zero: \n");
  for(int j=0; j<TAM; j++){
    if(valor[j] < 0)
    printf("%i \n", valor[j]);
  }
          
}
  