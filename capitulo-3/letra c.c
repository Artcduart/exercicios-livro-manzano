// Volume de uma lata de óleo
#include <stdio.h>
 
int main() {

float Volume, Altura, Raio;
printf("Digite o valor da Altura em cm: ");
 scanf("%f", &Altura);
 
printf("\nDigite o valor do raio da lata em cm: ");
 scanf("%f", &Raio);
 
Volume = 3.14159 * Raio * Raio * Altura;
printf("O valor do volume da lata e de %.2f centimetros cubicos", Volume);
 
return 0;
}