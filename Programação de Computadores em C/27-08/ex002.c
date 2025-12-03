//Crie um programa com uma função para calcular o imc de uma pessoa 
//
#include <stdio.h>
  
void calcular(int peso, float altura) {
    float imc = peso / (altura * altura);

    printf("Seu IMC é %.2f", imc);

}

int main ()
{

    int peso;
     float altura;

     printf("Qual seu peso? ");
    scanf("%d", &peso);

    printf("Qual sua altura (em metros)? ");
    scanf("%f", &altura);

    calcular(peso, altura);
}
