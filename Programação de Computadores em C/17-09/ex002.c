//002. Crie uma variável float valor. Um ponteiro para ela, receba o valor por scanf e dobre o valor usando o ponteiro.
//
#include <stdio.h>
 int main (void)
 {
	float valor;
    float *pvalor;

pvalor = &valor;

printf("Digite um valor: \n");
 scanf("%f", pvalor);

 *pvalor = (*pvalor) * 2;

 printf("o dobro do seu número é: %.2f", valor);
 }



 