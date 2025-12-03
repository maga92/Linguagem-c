#include <stdio.h>
#include <malloc.h>

typedef struct 
{
    int peso;
    int altura;
    
}PesoAltura;

typedef int chave;


#define alturamax 225

 int main ()
 {

PesoAltura pessoa1;
 pessoa1.peso = 80;
 pessoa1.altura = 185;

 printf("Peso: %i. Altura: %i \n", pessoa1.peso, pessoa1.altura);

 PesoAltura* pessoa2 = (PesoAltura*) malloc(sizeof(PesoAltura));
pessoa2->peso = 90;
pessoa2->altura = 230;

 printf("Peso: %i. Altura: %i \n", pessoa2->peso, pessoa2->altura);


if (pessoa1.altura && pessoa2->altura > alturamax)
printf("Altura não permitida \n");
else
printf("Dentro do permitido \n");



printf("\n");
// --- Ponteiro e alocação

    int a = 25;
    int* b = &a;
    *b = 30;
    printf("Valor atual de x: %i\n", a);



printf("\n");
// --- Memory Allocation


// #include <malloc.h> não esquecer da bibloteca do malloc.


    int* y = (int*) malloc(sizeof(int));
    *y = 20;
    int z = sizeof(int);
    printf("*y=%i z=%i\n", *y, z);
 


return 0; }