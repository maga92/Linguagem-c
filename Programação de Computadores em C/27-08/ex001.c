//Crie uma função para receber o nome da pessoa e sauda-lá
//

#include <stdio.h>

void saudacao(char nm[]) {
    printf("Olá, %s! Tudo bem?\n", nm);
}

int main(void) {
    char nome[100];
    printf("Qual seu nome?\n");
    scanf("%99s", nome);
    saudacao(nome);
    return 0;
}