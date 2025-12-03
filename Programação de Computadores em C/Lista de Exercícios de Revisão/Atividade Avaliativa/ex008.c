//Exercício 8.
//Crie uma struct chamada Produto com: Descrição, Preço e Peso. Leia os dados de dois produtos e exiba a soma dos pesos e preços
//
#include <stdio.h>

struct Produto
{
char descricao[100];
float preco;
float peso;
};

 int main (void)
 {
    struct Produto p1, p2;
printf("Descrição do produto 1: \n");
fgets(p1.descricao, 50, stdin);

   printf("digite o preço do produto 1: \n");
   scanf("%f", &p1.preco);

      printf("Digite o peso do produto 1: \n");
      scanf("%f", &p1.peso);

getchar();

printf("Descrição do produto 2: \n");
fgets(p2.descricao, 50, stdin);

   printf("digite o preço do produto 2: \n");
   scanf("%f", &p2.preco);

      printf("Digite o peso do produto 2: \n");
      scanf("%f", &p2.peso);

float somaPreco = p1.preco + p2.preco;
float somaPeso = p1.peso + p2.peso;

printf("\n");

printf("A soma dos preços é: %.2f \n", somaPreco);
printf("A soma dos pesos é: %.2f \n", somaPeso);

 }