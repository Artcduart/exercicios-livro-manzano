// Calcular o quadrado de um número
#include <stdio.h>
#include <math.h> 
int main() {
 
  int valor, valorAoQuadrado;
 
  printf("Digite um valor inteiro para ser elevado ao quadrado: ");
  scanf("%d", &valor);

  valorAoQuadrado = pow(valor, 2);
 
  printf("%d elevado ao quadrado e igual a %d", valor, valorAoQuadrado);

  return 0;
}