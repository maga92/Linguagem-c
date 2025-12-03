//Escreva um vetor[10], que preencha as 10 primeiras posiçoes com números multiplos de 10.
//

#include <stdio.h>
int main(void) {
    int i;
    int mult[10];

    for (i = 0; i <= 10; i++) {
        mult[i] = (i+1)*10; 
        printf("%d\n", mult[i]);
    }

    return 0;
}
