#include <stdio.h>
#include <string.h>

struct Produto 
{
    float valor;
    char nome[50];
    char desc[100];
};

void atualizarPreco (struct Produto *Produto, float novoPreco)
{
Produto->valor = novoPreco;
}
 int main (void)
 {
float novoPreco;
char sn;

  struct Produto produto1;
    strcpy (produto1.nome, "Arroz");
    strcpy (produto1.desc,"Arroz branco. Tipo Especial, Buriti.");
    produto1.valor = 31.50;

    printf("Produto: %s \n", produto1.nome);
    printf("Descricao: %s \n", produto1.desc);
    printf("Preco: %.2f \n", produto1.valor);

printf("------------ \n");
printf("Mudar preco? (s/n)");
scanf("%c", &sn);

if (sn == 'n'){
    printf("Ok! O valor do seu arroz continua: %f", produto1.valor);
    return 1;
}
else {
    printf("Digite o novo preco do %s\n", produto1.nome);
    scanf("%f", &novoPreco);
atualizarPreco(&produto1, novoPreco);
printf("O novo valor do Arroz: %.2f", produto1.valor);

  }
 }