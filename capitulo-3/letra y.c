// Antecessor e sucessor de um número inteiro
#include <stdio.h>
#include <math.h> 

int main() {
 
  int valor, ant, suc;
 
  printf("Digite um valor inteiro: ");
  scanf("%d", &valor);
 
  ant = valor - 1;
  suc = valor + 1;
 
  printf("\nO antecessor de %d e %d", valor, ant);
  printf("\nO sucessor de %d e %d", valor, suc);

  return 0;
  
}