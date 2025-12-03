#include <stdio.h>
      #include <string.h>    
      
      #define MAX 20

typedef struct {
    int camisa;
    char nome[50];
    int gols;
} Jogador;





void cadastroAtleta(Jogador *j) 
{
printf ("Numero da camisa: \n");
 scanf("%d", &j->camisa);

   printf("Nome do jogador: \n");
    scanf("%d", &j->nome);
   
       printf("Quantos gols feitos? \n");
        scanf("%d", &j->gols);
}





void imprimirTime (Jogador Time[], int n)
{
 if (n == 0)
{
 printf("Nenhum cadastro no momento \n");
}

return; 

    printf("TIME------------------\n");

    for (int i = 0; i<n; i++)
    {
      printf("Jogador: %-10s | Camisa: %d | Gols: %d  \n",
                  Time[i].nome, Time[i].camisa, Time[i].gols);
    }

};





int buscarJogador (Jogador Time[], int n, int qualCamisa)
{
  for (int i = 0; i<n; i++)
  {
    if (Time[i].camisa == qualCamisa)
    {
      return i;
    }
  }
  return -1;

}



//main function
int main(void)
{
Jogador Time[MAX];
int opcao;
int qtd = 0;
do
{
printf("MENU------------------\n");

printf("1 - Cadastrar jogador\n");
 printf("2 - Listar jogadores\n");
  printf("3 - Buscar jogador por camisa\n");
   printf("0 - Sair\n");
    printf("Opcao: ");

scanf("%d", opcao);

if (opcao == 1){
    if (qtd <MAX){
      cadastroAtleta(&Time[qtd]);
      qtd++;
    } else {
             printf("Limite de jogadores atingido!\n");
           }

}

else if (opcao == 2) {
imprimirTime(Time, qtd);
}
else if (opcao == 3) {
int camisa;
            printf("Digite o numero da camisa: ");
            scanf("%d", &camisa);

int pos = buscarJogador(time, qtd, camisa);
}
}