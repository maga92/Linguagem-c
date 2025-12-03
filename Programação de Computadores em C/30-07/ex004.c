#include <stdio.h>
int main(void) 
{
    float precos[5];
    float media = 0;
    int maior100 = 0;
    float maiorPreco, menorPreco;

    for (int i = 0; i < 5; i++) {
        printf("Informe o preço do produto %d: ", i + 1);
        scanf("%f", &precos[i]);

        if (i == 0) {
            maiorPreco = precos[i];
            menorPreco = precos[i];
        } else {
            if (precos[i] > maiorPreco)
                maiorPreco = precos[i];
            if (precos[i] < menorPreco)
                menorPreco = precos[i];
        }

        media += precos[i];

        if (precos[i] > 100)
            maior100++;
    }

    media = media / 5;

    printf("\nProdutos com preço acima de R$100: %d\n", maior100);
    printf("Média dos preços: R$%.2f\n", media);
    printf("Produto mais caro: R$%.2f\n", maiorPreco);
    printf("Produto mais barato: R$%.2f\n", menorPreco);

}
