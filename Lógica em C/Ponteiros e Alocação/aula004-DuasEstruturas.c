#include <stdio.h>
#include <stdlib.h>

typedef struct aux
{
    int cpf;
    int idade;
    struct aux* conjuge; 
} PESSOA;

// Função para imprimir os CPFs
void imprimirCPF(PESSOA p)
{
    if (p.conjuge != NULL)
        printf("CPF's: %i x %i \n", p.cpf, p.conjuge->cpf);
    else
        printf("CPF: %i não tem cônjuge.\n", p.cpf);
}

// Função main() - struct e void vão acima

int main()
{
    PESSOA p1;
     PESSOA p2;
      PESSOA solteiro;

    p1.cpf  = 3100;
     p1.idade = 32;

    p2.cpf  = 2900;
     p2.idade = 35;

    solteiro.cpf  = 2300;
     solteiro.idade = 30;

       p1.conjuge = &p2; // p1 recebe o endereço da variável da p2
       p2.conjuge = &p1; // p2 recebe o endereço da variável da p1
       solteiro.conjuge = NULL; // Não namora

    imprimirCPF(p1);
     imprimirCPF(p2);
      imprimirCPF(solteiro);

    return 0;
}