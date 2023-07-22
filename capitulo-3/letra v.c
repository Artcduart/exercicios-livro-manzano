// Calcular uma variável elevada a outra variável
#include <stdio.h>
#include <math.h> 

int main() {
 
  int valor1, valor2, resultado;
 
  printf("Digite um valor inteiro: ");
  scanf("%d", &valor1);
 
  printf("Digite outro valor inteiro: ");
  scanf("%d", &valor2);
 
  resultado = pow(valor1, valor2); 

  printf("%d elevado ao expoente %d e igual a %d", valor1, valor2, resultado);

  return 0;
}