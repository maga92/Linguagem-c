#include <stdio.h>
 int multiplica (int n1, int n2)
 {
    return n1 * n2;
}

int main ()
 {

     int digitado1, digitado2;
     printf("Digite dois números: \n");
    scanf("%d %d", &digitado1, &digitado2);

int produto1 = multiplica(digitado1, digitado2);
    printf("Resultado da primeira multiplicação: %d\n", produto1);
    printf("\n");

    
     int digitado3, digitado4;
     printf("Digite outros dois números: \n");
    scanf("%d %d", &digitado3, &digitado4);

int produto2 = multiplica(digitado3, digitado4);
    printf("Resultado da segunda multiplicação: %d\n", produto2);
  return 0;  
 }