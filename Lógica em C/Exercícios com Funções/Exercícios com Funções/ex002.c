    #include <stdio.h>
    int validarMedia (int n1, int n2, int n3)
    {
    int nota = (n1 + n2 + n3) / 3; // Não esquecer os parenteses

   if (nota >= 6)
        return 1;  // aprovado
    else
        return 0;  // reprovado
    }
    
    int main ()
    {
    int a, b, c;

    printf("digite as três notas: \n");
    scanf("%d %d %d", &a, &b, &c );

   int resultado = validarMedia(a, b, c);

        if (resultado == 1) 
        printf("Aluno aprovado!\n");
     else 
        printf("Aluno reprovado!\n");
    


    return 0;  
    }