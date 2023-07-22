// Quantidade de litros de combustível gasta em uma viagem
#include <stdio.h>

int main() {

float velocidade, tempo, distancia, litros_usados;
printf("Digite o valor da velocidade media em km/h: ");
 scanf("%f", &velocidade);
 
printf("\nDigite o valor do tempo gasto em horas: ");
 scanf("%f", &tempo);
 
distancia = tempo * velocidade;
litros_usados = distancia / 12;
 
printf("A quantidade de combustivel gasta e de %.2f litros", litros_usados);

return 0;
}