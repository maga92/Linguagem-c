//003. Altere o ex002 de forma que o dobro do valor seja calculado em uma função.
//
#include <stdio.h>
float dobro(float valor) {
    return valor * 2;
};

int main (void)
 {
	float valor;
    float *pvalor;

pvalor = &valor;

printf("Digite um valor: \n");
 scanf("%f", pvalor);

valor = dobro(valor);

 printf("o dobro do seu numero é: %.2f", valor);
 }

 