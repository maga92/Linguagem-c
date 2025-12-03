
 /*
#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, mediax, apro, repro, i;
    float n1, n2, n3, mediaTurma;
    
    printf("Digite numero de alunos: \n");
    scanf("%d", &x);  

    apro = 0;
    repro = 0;
    mediaTurma = 0;

    for (i = 0; i < x; i++)  
    {
        printf("Digite tres notas do aluno %d \n: ", i + 1);  
         scanf("%f", &n1);
          scanf("%f", &n2);
           scanf("%f", &n3);

    mediax = (n1 + n2 + n3) / 3;
    printf ("A media do aluno %d foi %d \n", i + 1, mediax);
     mediaTurma += mediax;
      if (mediax >= 6) 
apro = apro + 1;
      else 
repro = repro + 1;
    }
   
    mediaTurma = mediaTurma / x;
    printf("Aprovados: %d \n", apro);
    printf("Reprovados: %d \n", repro);
    printf("A media da turma foi: %.1f\n", mediaTurma);

    return 0; 
    }
    
    */

#include <stdio.h>
#include <math.h>
 int main (void)
 {
int x, n1, n2, n3;
int apro, repro;
float mediax, mediat;
 printf("Digite numero de alunos: \n");
  scanf("%d", &x);

apro = 0;
repro = 0;
mediat = 0;

for (int i = 0; i < x; i++)
{
printf ("digite as três notas do aluno %i \n", i +1);
 scanf ("%i %i %i", &n1, &n2, &n3);

 mediax = (n1 + n2 + n3) / 3;
 printf("A média do aluno %i, é de %.1f \n", i + 1, mediax);
mediat = mediat + mediax;
    if(mediax >= 6.00)
    apro += 1;
    else
    repro += 1;
mediat = mediat / x;
}


printf("Aprovados: %d \n", apro);
    printf("Reprovados: %d \n", repro);
    printf("A media da turma foi: %.1f\n", mediat);

    return 0; 
   } 
