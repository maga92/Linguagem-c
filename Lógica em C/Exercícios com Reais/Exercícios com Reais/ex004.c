#include <stdio.h>
 int main (void)
 {
int n;
float x, y, cont;
 printf("Digite um n \n");
  scanf("%i", &n);

  for (int i = 0; i < n; i++) 
  {
    printf("Digite x e y \n");
     scanf("%f %f", &x, &y);

     if (x >= 0 && y >= 0 && x * x + y * y <= 1) 
     {
        printf("O ponto (%.2f, %.2f) pertence a H.\n", x, y);
        cont++;
    } 
    else 
        printf("O ponto (%.2f, %.2f) não pertence a H.\n", x, y);   
        break;
}

printf("Total de pontos que pertencem a H: %d\n", cont);
return 0;

  }
  