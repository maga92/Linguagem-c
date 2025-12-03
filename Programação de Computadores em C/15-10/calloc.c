#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *v;
    int num;

    printf("Quantos valores deseja armazenar? ");
    scanf("%d", &num);

    v = calloc(num, sizeof(int));
    if (v == NULL)
    {
        printf("Erro de alocação");
        return 1;
    }

    for(int i = 0; i < num; i++)
    {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &v[i]);
    }

    printf("Valores armazenados -------------- \n");
    for(int i = 0; i < num; i++)
    {
        printf("%d: %d \n", i+1, v[i]);
    }

    free(v);
    return 0;
}