#include <stdio.h>
#include <math.h>
 int main (void)
 {
int n;
float x, termo, soma;
  printf("Digite um real e um natura \n");
    scanf("%f %d", &x, &n);

    for (int i = 0; i < n; i++) 
    {

        termo = pow(-1, i) * pow(x, 2 * i) / tgamma(2 * i + 1);
        soma += termo;
    }
    printf("cos(%.2f) ≈ %.6f\n", x, soma);
    return 0;
 } 
    
 //Não fiz - Não entendi a lógica