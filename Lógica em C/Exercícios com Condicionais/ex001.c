#include <stdio.h>
 int main (void)
 {
float renda;
int idade;

printf("Qual sua idade? \n");
scanf("%d", &idade);

printf("Qual sua renda mensal? \n");
scanf("%f", &renda);
printf("\n");

if (idade >= 18 && renda >= 2000)
{
printf("Aprovado!\n");
printf("Sua renda é de: %f e sua idade é %d.\n", renda, idade);
}
else
{
printf("Reprovado...\n");
printf("Sua renda é de: %.2f e sua idade é %d.\n", renda, idade);
}
 }