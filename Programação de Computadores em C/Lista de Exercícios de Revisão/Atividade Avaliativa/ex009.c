//Exercício 9.
//Implemente uma função que calcule o quadrado de um inteiro recebido como parâmetro
//
#include <stdio.h>

int calcula(int n1) 
{
int quadrado = n1 * n1;
 return quadrado;
};

 int main (void)
 {
    int num;
    printf("digite um número: \n");
     scanf("%d", &num);

printf("O quadrado de %d é: %d", num, calcula(num));

 }