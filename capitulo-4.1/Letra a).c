#include <stdio.h>
#include <stdlib.h>

int main() {
  // Declaração das variáveis
  int valor1, valor2;
  char controle;
  
  // loop do-while para a repetição do programa
  do {
    
  printf("Digite um valor inteiro: ");
  scanf("%d", &valor1);

  printf("Digite outro valor inteiro: ");
  scanf("%d", &valor2);

  if (valor1 > valor2) {
    printf("\n--> O valor de %d - %d e igual a: %d",valor1, valor2, valor1 - valor2);
  } else {
      printf("\n--> O valor de %d - %d e igual a: %d", valor2, valor1, valor2 - valor1);
    }
  
printf("\n\n\n\n\n----------------------------------");
printf("\n  Deseja realizar outra operacao?");
printf("\n\n       (s) SIM       (n) NAO\n");
printf("----------------------------------\n");
scanf(" %c", &controle);
system("cls");

} while (controle == 's' || controle == 'S');

  return 0;
}
