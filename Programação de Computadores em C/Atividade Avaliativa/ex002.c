//Exercício 2.
//Leia 5 números reais e calcule: A soma dos números | A média entre eles
/*
#include <stdio.h>

float soma(float n1, float n2, float n3, float n4, float n5)
{
    return n1 + n2 + n3 + n4 + n5;
}

float media(float n1, float n2, float n3, float n4, float n5)
{
    return (n1 + n2 + n3 + n4 + n5) / 5.0;
}

int main(void)
{
    float n1, n2, n3, n4, n5;

    printf("Digite 5 números reais:\n");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    float resultadoSoma = soma(n1, n2, n3, n4, n5);
    float resultadoMedia = media(n1, n2, n3, n4, n5);

    printf("Soma: %.2f\n", resultadoSoma);
    printf("Média: %.2f\n", resultadoMedia);


}

*/

#include <stdio.h>

float soma(int n1, int n2, int n3, int n4, int n5)
{
return n1 + n2 + n3 + n4 + n5;
};

float media(int n1, int n2, int n3, int n4, int n5)
{
return (n1 + n2 + n3 + n4 + n5) / 5.0;
};
int main (void)
{
float n1, n2, n3, n4, n5;

printf("digite 5 números reais: (float)\n");
 scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

 float resultadoSoma = soma(n1,n2,n3,n4,n5);
 float resultadoMedia = media(n1,n2,n3,n4,n5);

 printf("A soma das notas é: %.2f \n", resultadoSoma);
 printf("A média das 5 notas é: %2.f \n",resultadoMedia);


}