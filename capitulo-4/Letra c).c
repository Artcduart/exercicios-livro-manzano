#include <stdio.h>

int main () {

int nota_1, nota_2, nota_3, nota_4;
float media;

  printf("Digite a nota 1: ");
  scanf("%d", &nota_1);
  
  printf("Digite a nota 2: ");
  scanf("%d", &nota_2);
  
  printf("Digite a nota 3: ");
  scanf("%d", &nota_3);
  
  printf("Digite a nota 4: ");
  scanf("%d", &nota_4);
  
  media = (nota_1 + nota_2 + nota_3 + nota_4) / 4;

  if (media >= 5) {
    printf("Aluno aprovado. Media: %.1f", media);
  } else {printf("Aluno reprovado. Media: %.1f", media);
  }
  
  return 0;
}