#include <stdio.h>
#include <string.h>

#define MAX 20

// ======================
// Pessoa 1: Estrutura e cadastro
// ======================
typedef struct {
    int camisa;
    char nome[50];
    int gols;
} Jogador;

// Função de cadastro (com passagem por referência)
void cadastrarJogador(Jogador *j) {
    printf("\nNumero da camisa: ");
    scanf("%d", &j->camisa);

    printf("Nome do jogador: ");
    scanf(" %[^\n]", j->nome);

    printf("Quantidade de gols: ");
    scanf("%d", &j->gols);  
}

// ======================
// Pessoa 2: Impressão do time
// ======================
void imprimirTime(Jogador time[], int n) {
    if (n == 0) {
        printf("\nNenhum jogador cadastrado ainda!\n");
        return;
    }

    printf("\n--- Time ---\n");
    for (int i = 0; i < n; i++) {
        printf("Camisa %d | Nome: %-10s | Gols: %d\n", 
               time[i].camisa, time[i].nome, time[i].gols);
    }
}

// ======================
// Pessoa 3: Busca
// ======================
int buscarJogador(Jogador time[], int n, int camisaBuscada) {
    for (int i = 0; i < n; i++) {
        if (time[i].camisa == camisaBuscada) {
            return i; // índice do jogador
        }
    }
    return -1; // não encontrado
}

// ======================
// Pessoa 4: Função principal (menu)
// ======================
int main() {
    Jogador time[MAX];
    int qtd = 0;
    int opcao;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Cadastrar jogador\n");
        printf("2 - Listar jogadores\n");
        printf("3 - Buscar jogador por camisa\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (qtd < MAX) {
                cadastrarJogador(&time[qtd]);
                qtd++;
            } else {
                printf("Limite de jogadores atingido!\n");
            }
        } 
        else if (opcao == 2) {
            imprimirTime(time, qtd);
        } 
        else if (opcao == 3) {
            int camisa;
            printf("Digite o numero da camisa: ");
            scanf("%d", &camisa);

            int pos = buscarJogador(time, qtd, camisa); // --------------------------------
            if (pos != -1) {
                printf("Encontrado: %s (Camisa %d, %d gols)\n", 
                       time[pos].nome, time[pos].camisa, time[pos].gols);
            } else {
                printf("Jogador nao encontrado!\n");
            }
        }
    } while (opcao != 0);

    return 0;
}