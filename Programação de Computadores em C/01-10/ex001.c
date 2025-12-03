#include <stdio.h>
#include <string.h>

struct Jogador {
    char nome[50];
    char posicao[50];
    int numero;

};

void AtualizarPosicao (struct Jogador *Jogador, int novoNumero) {
Jogador->numero = novoNumero;
};
 int main (void)
{

struct Jogador p1;
  strcpy (p1.nome, "Gabriel");
  strcpy (p1.posicao, "Volante");
  p1.numero = 92;
  

   printf("Nome: %s \n", p1.nome);
   printf("Numero antes de atualizar: %d \n", p1.numero);
   printf("------------ \n");
   AtualizarPosicao (&p1, 10);
      printf("Numero depois de atualizar: %d \n", p1.numero);

}