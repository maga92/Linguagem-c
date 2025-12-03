#include <stdio.h>
 int main (void)
 {
int matriz[2][3];
int i, j;
for(i=0; i<2; i++){
    for(j=0; j<3; j++){
        printf("Digite valor p/[%i][%i]", i, j);
        scanf("%i", &matriz[i][j]);
    }
}

printf("\n Matriz: \n");
for(i=0; i<2; i++){
    for(j=0; j<3; j++){
        printf("%i ", matriz[i][j]);
    }
    printf("\n");
}

 }