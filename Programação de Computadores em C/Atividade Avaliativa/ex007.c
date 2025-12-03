//Exercício 7.
//Crie uma struct chamanda Aluno com os campos: Nome, Nota1, Nota2... Leia os dados e calcule a média
//
#include <stdio.h>

struct Aluno
{
    char nome[50];
    float nota1;
    float nota2;
};
int main (void)
{
    struct Aluno aluno;
    printf("Nome do aluno: \n");
    fgets(aluno.nome, 50, stdin);

    printf("nota 1: \n");
     scanf("%f", &aluno.nota1);

    printf ("Nota 2: \n");
     scanf("%f", &aluno.nota2);

     float media = (aluno.nota1 + aluno.nota2) / 2.0;

     printf("A média de %s é: %.2f", aluno.nome, media);
 }