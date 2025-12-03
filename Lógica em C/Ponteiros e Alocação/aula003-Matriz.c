#include <stdio.h>
#include <stdlib.h>


void imprimir(int* b){
    printf("b0: %i, b1: %i, b2: %i\n", b[0], b[1], b[2]);
    printf("&b: %p, b: %p, *b: %i\n", &b, b, *b);
    b[0] = 21;
    b[1] = 23;
    b[2] = 25; 
}

int main(){
    int a[3];
    a[0] = 1;
    a[1] = 2;
    a[2] = 7;
    imprimir(a);
    printf("x0: %i, x1: %i, x2: %i\n", a[0], a[1], a[2]);   // *a vai pegar o vabor da posição 0.
    printf("&a: %p, a: %p, *a: %i\n", &a, a, *a);


printf("\n");
//Outra maneira...   -   Com malloc

int* c = (int*) malloc(sizeof(int)*3);   // *3 por que você quer uma matriz de três.
   c[0] = 4;
   c[1] = 5;
   c[2] = 6;
   
free(c); // Libera a memória
   c = (int*) a;  // O int* c, aponta pro int* a 

     printf("c0: %i, c1: %i, c2: %i\n", c[0], c[1], c[2]);
      printf("&a: %p, a: %p, *a: %i\n", &c, c, *c);


return 0; }