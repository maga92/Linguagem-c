//Leia 5 notas(float), calcule a média e mostre quantas ficaram acima.
/*
#include <stdio.h>
 int main (void)
 {
float nota [5];
 float totaln = 0;
  float media;
  int acima = 0;

    printf("5 notas: \n");
     for (int i = 0; i<5;i++){
scanf("%f", &nota[i]);
totaln += nota[i];
}

media = totaln /5.0;

printf("Média:%.2f \n", media);
printf("Notas acima da média:\n");

  for(int j=0; j<5; j++){
    if(nota[j] >= media) {
    printf("%.2f \n", nota[j]);
    acima++;
}}

  printf("Alunos acima da média: %i", acima);


 }

 */

 #include <stdio.h>
 int main (void)
 {
float notas[5];
  float totaln = 0;
   int acima = 0;

printf("digite 5 notas:\n");
for(int i = 0; i<5;i++){
  scanf("%f", &notas[i]);
  
  totaln += notas[i];
}

float media = totaln / 5.0;

printf("A média é: %.2f \n", media);
printf("\n");

printf("Notas acima da média: \n");
for (int j = 0; j<5; j++){
  if(notas[j] >= media)
  printf("%.2f \n", notas[j]);
   acima++;
}
printf("Alunos acima: %d", acima);
 }