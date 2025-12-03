#include <stdio.h>
 int main (void)
 {
int cont = 0, n;
printf("digite um numero: ");
 scanf("%i", &n);
int i = n;

while(i > 0)
{
cont += i;
i--;
printf("%i \n", cont);

}
 

 printf("O ultimo número da soma de %d é %d", n, cont);
 }
