// Desenvolver um algoritmo que leia um número inteiro e verifique se o número é divisível por 5 e por 3 ao mesmo tempo.
#include <stdio.h> 
int main (void)
 {

    int n1;

    do
    {
    printf("Digite um número: \n");
     scanf ("%i", &n1);

     if (n1 % 5 != 0 && n1 % 3 != 0){
      printf("Não é divisivel por três e por cinco! Tente outro \n");
      }
      } while (n1 % 5 != 0 && n1 % 3 != 0);
    
      printf("É divisivel por três e por cinco. \n ");
       


 return 0;}