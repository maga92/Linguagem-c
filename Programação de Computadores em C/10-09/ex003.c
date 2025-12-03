//Faça uma função recursiva que retorne o MDC entre dois números inteiros
//
#include <stdio.h>

int mdc (int n1, int n2)
{
    if (n2 == 0)
    return n1;
   else
    return mdc(n2, n1 % n2);
    
};
//
 int main (void)
 {
    int a, b;
    printf("Digite um número: \n");
     scanf("%i", &a);

     printf("Digite outro número: \n");
     scanf("%i", &b);
     

     printf("O MDC de %i e %i é: %i", a, b, mdc(a,b));
     
 }
