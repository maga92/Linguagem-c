#include <stdio.h>

int main(void) 
{
 float notas[5];
 float media;
 float soma = 0;

 printf("digite 5 notas: \n");

   for (int i = 0; i <= 4; i++) 
   {
    printf("nota %i é: ", i + 1);
    scanf("%f", &notas[i]);
    soma += notas[i];
   }
  media = soma / 5;
   if (media >= 6)
   printf("Você Passou!");
   else
   printf("Você Reprovou...");
    

return 0;
}
