//Leia um número inteiro e verifique se ele é primo.

#include <stdio.h>
 int main (void)
 {
int n1;

printf("digite um num: \n");
scanf("%d", &n1);

if (n1 % 2 == 0 && n1 % 1 == 0)
printf("Seu número é primo!");

 }