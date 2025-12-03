#include <stdio.h>
 int main (void)
 {
 int x = 10;
 int *px = &x;
printf("-------------- \n");
printf("X: %i \n", x); // apenas x é o valor dela
printf("Endereço de X: %p \n", &x); //&x - é o endereço de x 
// %p é para endereço de memória;
printf("PX: %p \n", px);
printf("Endereço de PX: %p \n", &px);

// 3 níveis de acesso à variavel?? 


*px = 15;
printf("-------------- \n");
printf("*px: %i \n", *px);
printf("X: %i \n", x);
 }