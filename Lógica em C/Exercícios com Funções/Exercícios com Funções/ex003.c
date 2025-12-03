#include <stdio.h>


void imprimirMatriz() {
    int matriz[10][10];

  //colocando zeros 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = 0;
        }
    }

  //imprime matriz
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n"); 
}

int main() {
    char simounao;
    printf("Imprimir matriz? (s ou n) \n");
    scanf("%c", &simounao);
    if (simounao == 's' || simounao == 'S')
   {
    printf("Primeira matriz:\n");
    imprimirMatriz();

    printf("Segunda matriz:\n");
    imprimirMatriz();
}
else 
printf("Ok! Tchau ;)");
    return 0;
}
