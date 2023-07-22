// Calcular a raiz de um numero qualquer com um indice qualquer
#include <stdio.h>
#include <math.h> 

int main() {
 
  float radicando, indice, resultado;
 
  printf("Digite um valor para o radicando: ");
  scanf("%f", &radicando);

  printf("Digite um valor para o indice da raiz: ");
  scanf("%f", &indice);
 
  resultado = pow(radicando,(1/indice));

  printf("A raiz de %.2f no indice %.2f e igual a %f", radicando, indice, resultado);

  return 0;
  
}
