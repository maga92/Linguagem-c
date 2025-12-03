/*
#include <stdio.h>
#include <math.h>
 int main (void)
 {
float a, b, c, delta,  positiva, negativa, raizDupla;

printf ("Digite: a, b, c. \n");
 scanf ("%f %f %f", a, b, c);

 delta = b*b - 4 * a * c;

     if (delta > 0)
     {
        positiva = (-b + sqrt(delta)) / (2 * a);
        negativa = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes reais distintas: %.2f (positiva) e %.2f (negativa) \n", positiva, negativa);
     } 
    else if (delta == 0) 
     {
raizDupla = -b / 2 * a;
printf("Raiz dupla: %.2f\n", raizDupla);
     }
     else 
     {
        float parte_real = -b / (2 * a);
        float parte_imaginaria = sqrt(-delta) / (2 * a);
        printf("Raízes complexas: %.2f ± %.2fi\n", parte_real, parte_imaginaria);
    
     }
    
    
 }

 */

 // Raiz de maneira mais simples (e objetiva)
 #include <stdio.h>
 #include <math.h>
 
 int main(void)
 {
     float a, b, c, delta;
 
     printf("Digite: a, b, c. \n");
     scanf("%f %f %f", &a, &b, &c);
 
     delta = b * b - 4 * a * c;
 
     if (delta > 0)
     {
         float positiva = (-b + sqrt(delta)) / (2 * a);
         float negativa = (-b - sqrt(delta)) / (2 * a);
 
         printf("A equação positiva é: %.2f \n", positiva);
         printf("A equação negativa é: %.2f \n", negativa);
     }
     else if (delta == 0)
     {
         float raizDupla = -b / (2 * a);
 
         printf("A equação possui uma raiz dupla: %.2f \n", raizDupla);
     }
     else
     {
         printf("Não existem raízes reais.\n");
     }
 
     return 0;
 }
