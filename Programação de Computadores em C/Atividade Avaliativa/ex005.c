//Exercício 5.
//Modifique o exercício quatro mostrando qual a posição do maior número
//
#include <stdio.h>
 int main (void)
 {
int matriz[4][4];
int i, j;
for(i=0; i<4; i++){
    for(j=0; j<4; j++){
        printf("Digite valor p/[%i][%i] \n", i, j);
        scanf("%i", &matriz[i][j]);
    }
}

int maior = matriz[1][0];
int posicao = 0;
for(j=0; j<4; j++){
    if (matriz[1][j] > maior){
        maior = matriz[1][j];
        posicao = j;
    }
}
printf("O maior número da segunda linha é: %d na posição [%d][%d]\n", maior, 1, posicao);

 }