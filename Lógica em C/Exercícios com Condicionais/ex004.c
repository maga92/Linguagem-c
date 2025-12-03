#include <stdio.h>
 int main (void)
 {
printf("0 a 50");
printf("\n");
for (int i = 1 ; i < 51; i++)
    {
        printf("O número %d é:", i);
if (i % 2 == 0 || i % 7 == 0)
printf("É par ou divisivel por 7\n");
else
printf("não é\n");


    }

 }