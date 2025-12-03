#include <stdio.h>

int main(void) 
{
    int matriz[3][3];
    int i, j;
 printf("digite os numeros da matriz 3x3:\n");
 for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
    scanf("%i", &matriz[i][j]);
  }
 }
 printf("Matriz: \n");
 for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
printf("%i \t", matriz[i][j]);
 }
 printf("\n");
 }
  return 0;
}
