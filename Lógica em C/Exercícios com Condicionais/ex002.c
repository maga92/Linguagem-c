#include <stdio.h>
#include <math.h>
 int main (void)
 {
printf("de 0 a 100. números multiplos de 3 e 5! \n");

for (int n1 = 1; n1 < 101; n1++)
{
    printf("o número %d é: ", n1);
 if (n1 % 3 == 0 || n1 % 5 == 0)
 printf("Divisivel por 3 ou 5! \n");
else
printf("Não é divisivel por 3 ou 5.\n");
}


 }