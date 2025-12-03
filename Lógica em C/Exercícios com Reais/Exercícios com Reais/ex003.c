   /*
#include <stdio.h>
 int main (void)
 {
    
    int n1;
    float x, y;
printf("Digite um número:\n");
 scanf ("%d", n1);
 for (int i = 0; i < n1; i++){
    printf("Digite as coordenadas de um ponto:\n");
    scanf("%f %f", &x, &y); 

    if (x >= 0 && y >= 0 && x*x + y*y <= 1)
    printf("O ponto (%f,%f) pertence a regiao.\n", x, y);
  else
    printf("O ponto (%.1f,%.1f) nao pertence a regiao.\n", x, y);
}

return 0;
}
*/
#include <stdio.h>
 int main (void)
 {
int num;
float x, y;
 printf("Digite um número \n");
  scanf("%d", &num);

  for (int i = 0; i <= num; i++)
  {
   printf("Digite os pontos: \n");
    scanf ("%f %f", &x, &y);
    if (x >= 0 && y >= 0 && x*x + y*y <= 1) 
    printf("Os pontos pertencem a H! \n");
    else
     printf("Os pontos não pertencem");
break;
  }}



