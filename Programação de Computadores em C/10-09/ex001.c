// Calcular o enésimo termo da sequência de Fibonacci com recursão.
//Se o usuário digitar 10, ele quer saber o décimo termo da sequencia de Fibonacci
// 0 1 1 2 3 5 8 13 21 ...

#include <stdio.h>

int fibo (int n)
{

if (n == 1)
   return 0;

else{
      if(n==2) 
return 1;

else
   return fibo(n-1) + fibo(n-2);   

    }
};
int main ()
{
int n1;
 printf("Digite um número inteiro (maior que zero) \n");
  scanf("%i", &n1);

  printf("O termo %i é: %i", n1, fibo(n1));

}
