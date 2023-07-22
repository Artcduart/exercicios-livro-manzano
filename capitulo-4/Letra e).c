#include <stdio.h>
#include <math.h>
int main() {
float a, b, c, delta, x1, x2;
printf("Digite o valor de A: ");
scanf("%f", &a);
printf("Digite o valor de B: ");
scanf("%f", &b);
printf("Digite o valor de C: ");
scanf("%f", &c);
delta = b * b - 4 * a * c;
if (delta < 0) {
printf("A equacao nao possui solucoes reais.\n");
} else if (delta > 0) {
x1 = (-b + sqrt(delta)) / (2 * a);
x2 = (-b - sqrt(delta)) / (2 * a);
printf("As solucoes da equacao sao: x1 = %.2f e x2 = %.2f\n", x1,
x2);
} else {
x1 = -b / (2 * a);
printf("A unica solucao da equacao e: x = %.2f\n", x1);
}
return 0;
}