//Crie uma função que permita calcular a média entre dois números e também entre
//três números usando funções 

#include <stdio.h>
 void media2 (int n1, int n2)
 {
    int m2 = (n1 + n2)/2; 
    printf("A média desses dois números é: %d", m2);
    printf("\n");
 }

 void media3 (int n3, int n4, int n5)
  {
    int m3 = (n3 + n4 + n5)/3; 
    printf("A média desses outros três números é: %d", m3);
        printf("\n");

 }


 int main (void)
 {
    int n1, n2;
    int n3, n4, n5;
printf("digite dois números (1° média): \n");
scanf("%d %d", &n1, &n2);

media2(n1, n2);

printf("digite outros três números (2° média): \n");
scanf("%d %d %d", &n3, &n4, &n5);

media3(n3, n4, n5);

 }