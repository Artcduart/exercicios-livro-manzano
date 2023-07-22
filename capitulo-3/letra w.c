// Calcular em metros uma medida em pés
#include <stdio.h>
#include <math.h> 

int main() {
 
  float pes, metros;
 
  printf("Digite o valor em pes: ");
  scanf("%f", &pes);
 
  metros = pes * 0.3048;

  printf("%.2f pes e igual a %.2f metros", pes, metros);

  return 0;
}
