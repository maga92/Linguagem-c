#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("Digite o valor em radianos: ");
    scanf("%lf", &x);
    printf("O seno de %.2f é %.5f\n", x, sin(x));
    return 0;
}

//calcula seno