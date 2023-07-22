// Área de uma circunferência
#include <stdio.h>

int main() {
    
    float R, A;

    printf("Digite o valor do raio da circunferencia: ");
    scanf("%f", &R);
    
    A = 3.14159265 * R * R;
    
    printf("O valor da area de um circulo de raio %.2f e igual a %.2f", R, A);
    
    return 0;
}