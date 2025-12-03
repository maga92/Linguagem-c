//
//

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
char descri[20];
int quant;
double preco;
}Produto;

 int main (void)
 {
int v[10] = {0,1,2,3,4,5,6,7,8,9};

    printf("%lu bytes", sizeof(Produto));
printf("\n %lu bytes", sizeof(v));
 }

 