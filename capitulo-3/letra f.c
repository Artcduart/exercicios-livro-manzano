// Troca dos valores de variáveis
#include <stdio.h>

int main() {
 
float a,b,c;
 
printf("Digite um valor para a variavel A: ");
 scanf("%f", &a);
 
printf("Digite um valor para a variavel B: ");
 scanf("%f", &b);
 
   c = a;
   a = b;
   b = c;
 
printf("\nO valor de A se tornou: %.2f", a);
printf("\nO valor de B se tornou: %.2f", b);

return 0;
 
}