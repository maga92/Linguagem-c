// Dados quatro números distintos, desenvolver um algoritmo que determine e imprima a soma dos três menores.
#include<stdio.h>
#include<math.h>

int main(void)
{
int n1, n2, n3, n4, soma;
 printf ("digite quatro números: \n");
scanf("%d %d %d %d",&n1, &n2, &n3, &n4);


if(n1 > n2 && n1 > n3 && n1 > n4)
{
soma = (n2 + n3 + n4);
printf("%d\n",soma);
}

else if(n2 > n1 && n2 > n3 && n2 > n4)
{
soma = n1 + n3 + n4;
printf("%d\n",soma);
}

else if(n3 > n1 && n3 > n2 && n3 > n4)
{
soma = n1 + n2 + n4;
printf("%d\n",soma);
}

else if(n4 > n1 && n4 > n2 && n4 > n3)
{
soma = n1 + n2 + n3;
printf("%d\n",soma);
}

if(n1 == n2 && n1 == n3 && n1 == n4)
{
printf("Iguais");
}

}