// tipo_retorno nome_função (dados_função) {  
// 
//  
#include <stdio.h>
float dobro(float num)
{
return num*2;
}
 int main (void)
 {
float numero; //nome diferente da função

 printf("digite um número \n");
    scanf("%f", &numero);
printf("%.2f", dobro(numero));
 };
