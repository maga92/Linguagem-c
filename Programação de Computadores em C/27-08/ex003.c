//Crie uma função para retornar a idade dela com base em seu ano de nascimento
//

#include <stdio.h>
int nascimento(int data)
{
return 2025 - data;
}

 int main (void)
 {
int ano;

   printf("Em qual ano você nasceu? \n");
     scanf("%d", &ano);

printf ("você tem %d anos",nascimento(ano));

 }