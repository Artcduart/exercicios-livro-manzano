// Calcular o quadrado da divisao entre duas variaveis
#include <stdio.h>
#include <math.h> 

int main() {
 
  int valor1, valor2, quadradoDaDivisao;
 
  printf("Digite um valor inteiro: ");
  scanf("%d", &valor1);

  printf("Digite outro valor inteiro: ");
  scanf("%d", &valor2);
 
  quadradoDaDivisao = pow((valor1 / valor2),2);
 
  printf("\nO quadrado da divisao entre %d e %d e igual a %d", valor1, valor2, quadradoDaDivisao);

  return 0;
}