//Exercício 1.
//Leia 10 números inteiros e conte quantos são positivos, negativos e zeros
/*
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

*/

#include <stdio.h>
int main (void)
#define TAM 10
{
int num[TAM];

printf("digite 10 valores (int): \n");
for (int i = 0; i< TAM;i++){
  printf("%i° Valor: ", i+1);
  scanf("%i", &num[i]);
}

printf("Números maiores que zero:\n \n");
for (int j = 0; j<TAM; j++){
  if(num[j] > 0){
   printf("%i°: %i \n",j, num[j]);
  }
}

printf("Números menores que zero:\n \n");
for (int j = 0; j<TAM; j++){
if (num[j] < 0){
  printf("%i°: %i \n",j, num[j]);
}
}

printf("Números iguais que zero:\n \n");
for (int j = 0; j<TAM; j++){
if (num[j] == 0){
  printf("%i°: %i \n", j, num[j]);
}
}


}
