
#include <stdio.h>
 int main (void)
 {

int n1, n2;

printf("Digite dois números inteiros: ");
   scanf("%i %i", &n1, &n2);

  while (n1 >= 0 && n2 >= 0 && (n1 != 0 && n2 != 0))
   {
   printf("Digite outros dois números:");
  scanf("%i %i", &n1, &n2);
   }

   printf("Programa encerrado.\n");
 }
