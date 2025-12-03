//004. Crie duas variáveis x e y com um ponteiro para cada (px e py). Faça duas funções para 
//     multiplicar x por y. Uma usando cópia dos valores(x y), e outra por referência (*x *y).
//
#include <stdio.h>

int multcopia (int x, int y)
{
   return x * y;
};
//
int multreferencia (int *x, int *y)
{
   return (*x) * (*y);
};
//
 int main (void)
 {
int x;
int y;
   int *px;
   int *py;
      px = &x;
      py = &y;

printf("Digite um valor: \n");
  scanf("%i", px);

printf("Digite outro valor: \n");
  scanf("%i", py);

  printf("\n \nMultiplicação por cópia: %i \n", multcopia(x,y));
  printf("Multiplicação por referência: %i \n", multreferencia(px, py));


 }

 