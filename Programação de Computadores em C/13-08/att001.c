//Leia e exiba uma matriz de inteiros 3x3
//
#include <stdio.h>
 int main ()
 {
    int matriz[3][3];
    int linha, coluna;

for(linha=0;linha<3; linha++){
    for(coluna=0; coluna<3; coluna++){
        printf("Vetor para [%i][%i] \n", linha, coluna);
        scanf("%d", &matriz[linha][coluna]);
    }
}

printf("\n Matriz: \n");
for(linha=0;linha<3; linha++){
    for(coluna=0; coluna<3; coluna++){
        printf("%i ", matriz[linha][coluna]);
    }
    printf("\n");
}



 }