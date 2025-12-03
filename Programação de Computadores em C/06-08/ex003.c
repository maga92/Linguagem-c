//Escreva um vetor[10], que preencha as 10 primeiras posiçoes com números negativos.
//

#include <stdio.h>
int main(void) {
    int i;
    int neg[10];

    for (i = 0; i > -10; i--) {
        neg[i] = i - 1;
        printf("%d\n", neg[i]);
    }

    return 0;
}

