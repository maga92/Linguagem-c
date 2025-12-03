#include <stdio.h>
#include <math.h>
int main(void)
{
    int humi, temp;

    printf("Digite a temperatura: ");
    scanf("%d", &temp);
    printf("Digite a umidade: ");
    scanf("%d", &humi);

    if (temp >= 20 && temp <= 30 && humi < 70)
        printf("Clima ideal\n");
    else 
        printf("Clima não ideal\n");
}