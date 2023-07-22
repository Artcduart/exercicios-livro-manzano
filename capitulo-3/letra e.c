// Valor de uma prestação de um bem em atraso
#include <stdio.h>

int main() {

float prestaçao, valor, taxa;
int tempo;
char cifrao1, cifrao2;
 
printf("Digite o valor do bem em atraso: ");
 scanf("%f", &valor);
 
printf("Digite o valor do tempo em meses: ");
 scanf("%d", &tempo);
 
printf ("Digite o valor da taxa: ");
 scanf("%f", &taxa);
 
prestaçao = valor + (valor * (taxa/100) * tempo);
cifrao1 = 'R';
cifrao2 = '$';
 
printf("O valor da prestacao e %c%c%.2f", cifrao1, cifrao2, prestaçao);

return 0;
}