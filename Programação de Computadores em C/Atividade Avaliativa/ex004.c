//Exercício 4.
//Leia uma matriz de 4x4 de inteiros e informe qual o maior número da segunda linha
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
for(j=0; j<4; j++){
 if (matriz[1][j] > maior){
    maior = matriz[1][j];
}
 }
printf("O maior número da segunda linha é: %d \n", maior);


}