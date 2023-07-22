// Quadrado da soma de três valores
#include <stdio.h>
#include <math.h>

int main() {
    
    int A, B, C, quadradoDaSoma;

    printf("Digite um valor inteiro para a variavel A: ");
    scanf("%d", &A);
    
    printf("Digite um valor inteiro para a variavel B: ");
    scanf("%d", &B);
    
    printf("Digite um valor inteiro para a variavel C: ");
    scanf("%d", &C);
    
    quadradoDaSoma = pow(A+B+C,2);
    
    printf("O quadrado da soma %d + %d + %d e igual a %d", A, B, C, quadradoDaSoma);
    
    return 0;
}