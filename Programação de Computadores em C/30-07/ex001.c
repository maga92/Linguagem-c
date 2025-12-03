//Leia um vetor de 5 números interios e exiba apenas os pares em novo loop

/*
#include <stdio.h>
 int main (void)
 {
int num [5];
    printf("5 números:");
     for (int i=0; i<5;i++)
scanf("%i", &num[i]);
 printf ("números pares: \n");
  for(int j=0; j<5; j++)
  {
    if(num[j] % 2 == 0)
    printf("%i", num[j]);
  }

 }
 */

 #include <stdio.h>
 int main (void)
 {

  int vetor[5];
  int i;

  printf("digite 5 números: \n");
    for(i = 0; i<5;i++){
scanf("%d", &vetor[i]);
    }

    printf("números pares: \n");
    for(int j=0;j<5;j++){
if (vetor[j] % 2 == 0)
printf("%d \n", vetor[j]);
    }

 }