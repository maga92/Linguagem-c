/*
#include <stdio.h>
#include <math.h>
 int main (void)
 {
    float x, juros, montante;
       int mes;
 printf("Valor de x: \n");
 scanf ("%f", &x);

 printf("Valor de juros mensais(em decimal): \n");
 scanf ("%f", &juros);

  for(mes = 1;mes <= 12; mes++)
  {
    montante = x * pow(1 + juros, mes);
    printf("Mês %2d: %.2f complexos\n", mes, montante);

  }

  juros = montante - x;
printf("o juros foi de: %.2f", juros);
    
 }



*/


#include <stdio.h>
#include <math.h>
 int main (void)
 {
   float x, montante, juros;
    int mes;
    
    printf ("Capital: \n");
     scanf ("%f", &x);

    printf("Juros mensais \n");
     scanf("%f", &juros);

 for(mes = 1; mes <= 12; mes++)
 {
 montante = x * pow(1 + juros, mes);
  printf("No mês: %i, o montante foi: %.2f \n", mes, montante);
 }
 juros = montante - x;
  printf("Juros: %.2f \n", juros);
    
 }














