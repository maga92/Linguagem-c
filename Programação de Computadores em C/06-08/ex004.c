//Escreva um programa que recebe 10 valores inteiros em um vetor e copie esse valor para um segundo vetor.
//

#include <stdio.h>
 int main (void)
 {
    int i;
    int a[10];
    int b[10];

 printf("10 números \n");
    
    // lê os 10 valores
    for (i = 0; i < 10; i++) {
        scanf("%i", &a[i]);
    }

       printf("\nVetor A:\n");  // Título fora do for
    // imprime vetor a
    for (i = 0; i < 10; i++) {
        printf("%i\n", a[i]);
    }


    //Copiando valores
   for (i = 0; i < 10; i++) {
    b[i] = a[i];
   }


    printf("\nVetor B:\n");  // Título fora do for
    // imprime vetor b
    for (i = 0; i < 10; i++) {
        printf("%i\n", b[i]);
    }




    return 0;
}

