#include <stdio.h>
int main() 
{
    int n, k;
    float Hn = 0;

    scanf("%d", &n);
    for (k = 1; k <= n; k++) Hn += 1.0 / k;
    printf("H_%d = %.2f\n", n, Hn);
    
}
//????? não é entendivel 