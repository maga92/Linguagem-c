//001. Crie uma variavel de tipo inteiro, chamada num. Um ponteiro para ela, chamado pnum.
//     Atribua num = 2, altere o valor de num por pnum e verifique a diferença.
//
#include <stdio.h>
 int main (void)
 {
	 int num;         // variável inteira
	 int *pnum;       // ponteiro para inteiro

	 num = 2;         // atribui 2 a num
	 pnum = &num;     // pnum aponta para num

	 printf("Valor de num antes: %d\n", num);
	 printf("Valor de num via ponteiro: %d\n", *pnum);

	 // altera o valor de num usando o ponteiro
	 *pnum = 10;

	 printf("Valor de num depois: %d\n", num);
	 printf("Valor de num via ponteiro depois: %d\n", *pnum);

	 return 0;
 }

 