//Leia 5 valores inteiros em um vetor e ao final mostre quantos são positivos, negativos e zero.

#include <stdio.h>
 int main (void)
 {
int valor[5];

printf("Digite cinco valores:\n");
  for(int i = 0; i<5; i++)
    scanf("%i", &valor[i]);

     printf ("números maiores que zero: \n");
  for(int j=0; j<5; j++){
    if(valor[j] > 0)
    printf("%i \n", valor[j]);
  }


   
            printf ("Zero: \n");
  for(int j=0; j<5; j++){
    if(valor[j] == 0)
    printf("%i \n", valor[j]);
  }

  printf ("números menores que zero: \n");
  for(int j=0; j<5; j++){
    if(valor[j] < 0)
    printf("%i \n", valor[j]);
  }
          
}
  